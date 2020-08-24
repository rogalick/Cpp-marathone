template<typename T>
T sumOfArguments(T first) {
  return first;
}

template<class T, class ...Ts>
T sumOfArguments(T t, Ts... args){
	return t + sumOfArguments(args...);
}
