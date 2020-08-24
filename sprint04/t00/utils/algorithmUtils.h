#pragma once

#include <tuple>
#include <iostream>

template<typename T>
bool IsInRange(const T& val, const T& from, const T& to) {
    return (val >= from && val <= to);
}

template <typename T>
bool IsInRange (const T& val, const std::pair<const T&, const T&>& minmax) {
    return (val >= minmax.first && val <= minmax.second);
}

template <typename T>
bool IsInsideRange (const T& val, const T& from, const T& to) {
    return (val > from && val < to);
}

template <typename T>
bool IsInsideRange (const T& val, const std::pair<const T&, const T&>&minmax) {
    return (val > minmax.first && val < minmax.second);
}

template <class T, class U = T>
bool Modify(T& obj, U&& new_value) {
    if (obj == new_value)
        return false;
    obj = new_value;
    return true;
}

template <class Collection, class T>
void RemoveAll(Collection& c, const T& value) {
    auto end = std::remove(std::begin(c), std::end(c), value);
    Collection new_c(std::begin(c), end);
    c = new_c;
}

template <class Collection, class Pred>
void RemoveAllIf(Collection& c, Pred&& predicate) {
    auto end = std::remove_if(std::begin(c), std::end(c), predicate);
    Collection new_c(std::begin(c), end);
    c = new_c;
}
template <class Collection, class T>
auto Find(Collection& c, const T& value) {
    return std::find(c.begin() ,c.end(), value);
}

template <class Collection, class Pred>
auto FindIf(Collection& c, Pred&& predicate) {
    return std::find(c.begin() ,c.end(), predicate);
}

template <class Collection, class T>
bool Contains(const Collection& c, const T& value){
    if (std::end(c) != Find(c, value))
        return true;
    return false;
}

template <class Collection, class Pred>
bool ContainsIf(const Collection& c, Pred&& predicate){
    if (std::end(c) != FindIf(c, predicate))
        return true;
    return false;
}

template<class Collection, class Pred>
int CountIf(const Collection& c, Pred&& predicate) {
    return std::count_if(std::begin(c), std::end(c), predicate);
}

template<class T>
const auto& Min(const T& arg) {
    return arg;
}

template<class T, class... Args>
const auto& Min(const T& arg, const Args&... args) {
    return arg < Min(args...) ? arg : Min(args...);
}

template<class T>
const auto& Max(const T& arg) {
    return arg;
}

template<class T, class... Args>
const auto& Max(const T& arg, const Args&... args) {
    return arg > Max(args...) ? arg : Max(args...);
}

template<class Collection>
auto MaxElement(const Collection& c) {
    if (std::begin(c) == std::end(c))
        return std::end(c);
    auto maxElement = std::begin(c);
    for (auto i = maxElement; i != std::end(c); i++) {
        if (*i > *maxElement)
            maxElement = i;
    }
    return maxElement;
}

template<class Collection>
auto MinElement(const Collection& c) {
    if (std::begin(c) == std::end(c))
        return std::end(c);
    auto minElement = std::begin(c);
    for (auto i = minElement; i != std::end(c); i++) {
        if (*i < *minElement)
            minElement = i;
    }
    return minElement;
}

template<class Collection, class Comp>
auto MaxElement(const Collection& c, Comp&& comparator) {
    if (std::begin(c) == std::end(c))
        return std::end(c);
    auto maxElement = std::begin(c);
    for (auto i = maxElement; i != std::end(c); i++) {
        if (comparator(*i, *maxElement)) {
            maxElement = i;
        }
    }
    return maxElement;
}

template<class Collection, class Comp>
auto MinElement(const Collection& c, Comp&& comparator) {
    if (std::begin(c) == std::end(c))
        return std::end(c);
    auto minElement = std::begin(c);
    for (auto i = minElement; i != std::end(c); i++) {
        if (comparator(*i, *minElement)) {
            minElement = i;
        }
    }
    return minElement;
}

template<class Collection>
void Sort(Collection& c){
    std::sort(std::begin(c),std::end(c));
}

template<class Collection, class Comp>
void Sort(Collection& c, Comp&& comparator){
    std::sort(std::begin(c),std::end(c),comparator);
}

template <class Collection>
void Unique(Collection& c){
    Sort(c);
    c = {c.begin(),std::unique(c.begin(),c.end())};
}

template<class Collection, class Pred>
void Unique(Collection& c, Pred&& predicate) {
    SortT(c);
    std::unique(std::begin(c), std::end(c), predicate);
}

template<class Collection, class Pred>
void ForEach(Collection& c, Pred&& predicate) {
    std::for_each(std::begin(c), std::end(c), predicate);
}

template<class Collection, class T>
int IndexOf(const Collection& c, const T& value) {
    int i = 0;
    for (auto start = std::begin(c); start != std::end(c); ++start, ++i) {
        if (value == *start) {
            return i;
        }
    }
    return -1;
}

template<class Collection, class Pred>
int IndexOfIf(const Collection& c, Pred&& predicate) {
    int i = 0;
    for (auto start = std::begin(c); start != std::end(c); ++start, ++i) {
        if (predicate(*start)) {
            return i;
        }
    }
    return -1;
}
