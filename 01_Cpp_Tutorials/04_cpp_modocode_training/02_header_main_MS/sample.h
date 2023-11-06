#pragma once
#include <vector>
#include <string>

namespace N
{
    inline namespace P
    {
        // ...
    }

    enum class colors : short { red, blue, purple, azure  };

    const double PI = 3.14;
    constexpr int MeaningOfLife{ 42 };
    constexpr int get_meaning()
    {
        static_assert(MeaningOfLife == 42, "unexpected!");
        return MeaningOfLife;
    }
    using vstr = std::vector<int>;
    extern double d;
#define LOG

#ifdef LOG
    void print_to_log();
#endif

    class my_class
    {
        friend class other_class;
    public:
        void do_something();
        inline void put_value(int i ) { vals.push_back(i); }

    private:
        vstr vals;
        int i;
    };

    struct RGB
    {
        short r{0};
        short g{0};
        short b{0};
    };

    template <typename T>
    class value_store
    {
    public:
        value_store<T>() = default;
        void write_value(T val)
        {
        }
    private:
        std::vector<T> vals;
    };

    template <typename T>
    class value_widget;
}
