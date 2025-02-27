#include "root_version_page.hpp"
#include "scalar.hpp"
#include "zkassert.hpp"

string version2value (PageContext &ctx, const uint64_t version)
{
    string value;
    ba2ba(value, version);
    return value;
}

uint64_t value2version (PageContext &ctx, const string &value)
{
    zkassert(value.size() == 8);
    uint64_t version = ba2ba(value);
    return version;
}