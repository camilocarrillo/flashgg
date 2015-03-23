//Indent header
//header1
//header2
#include "flashgg/Taggers/interface/StringHelpers.h"

#include <boost/algorithm/string/replace.hpp>


namespace flashgg
{

std::string replaceString(const std::string & inp, const std::string & src, const std::string & replace)
{
    return boost::replace_all_copy(inp,src,replace);
}

std::string formatString(const std::string & inp, const std::map<std::string,std::string> & replacements)
{
    auto buf = inp;
    for(auto & replace : replacements) {
        auto tmp = replaceString(buf,replace.first,replace.second);
        buf = std::move(tmp);
    }
    return buf;
}

}


/// std::string replaceString(const std::string & inp, const std::string & src, const std::string & replace)
/// {
/// 	auto buf = inp;
/// 	boost::replace_all(buf,src,replace);
/// 	return buf;
/// }

