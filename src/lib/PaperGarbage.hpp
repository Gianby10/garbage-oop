#ifndef PAPER_GARBAGE_HPP
#define PAPER_GARBAGE_HPP

#include "Garbage.hpp"

class PaperGarbage : public Garbage {
public:
    PaperGarbage(const std::string& name, double weight, bool isRecyclable, bool isBiodegradable);
    ~PaperGarbage() override = default;

    bool isBiodegradable() const;
    void dispose() const override;
private:
    bool m_isBiodegradable;
};

#endif
