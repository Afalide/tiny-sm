
#include <iostream>

template <typename t_>
struct auto_singleton
{
    static t_* m_instance;

    auto_singleton()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    virtual ~auto_singleton()
    {
    }

    static t_* auto_instance()
    {
        static t_* ret = new t_;
        return ret;
    }
};
