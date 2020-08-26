#pragma once
#include <iostream>

enum class LockpickDifficulty{
    None = 0,
    Novice = 25,
    Apprentice = 40,
    Adept = 60,
    Expert = 80,
    Master = 100
};

class IOpenable {
    public:
    bool virtual tryToOpen (LockpickDifficulty) = 0;
};

class ILockable {
    public:
    LockpickDifficulty virtual lockDifficulty() const = 0;
    bool virtual isLocked() const = 0;
};

class Container : public ILockable, public IOpenable {
    public:
        Container(bool isLocked, const LockpickDifficulty difficulty);

        LockpickDifficulty lockDifficulty() const override;
        bool isLocked() const override;
        bool tryToOpen(LockpickDifficulty skill) override;
        virtual std::string name() const = 0;

    private:
        bool m_isLocked{false};
        LockpickDifficulty m_difficulty;
};

class Barrel : public Container{
    public:
    Barrel():Container::Container(true, LockpickDifficulty::None){};
    std::string name() const override;
    
};

class Chest : public Container{
    public:
    Chest(bool isLocked, const LockpickDifficulty difficulty):Container::Container(isLocked, difficulty){};
     std::string name() const;
};


class Safe : public Container{
    public:
    Safe(bool isLocked, const LockpickDifficulty difficulty):Container::Container(isLocked, difficulty){};
     std::string name() const;
};