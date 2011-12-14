// Copyright: All Rights Reserved
// Author: egametang@gmail.com (tanghai)

#ifndef ORM_ORMTYPEDEF_H
#define ORM_ORMTYPEDEF_H

#include <boost/shared_ptr.hpp>
#include <cppconn/resultset.h>

namespace Egametang {

typedef boost::shared_ptr<sql::ResultSet> ResultSetPtr;
typedef boost::shared_ptr<sql::Statement> StatementPtr;

} // namespace Egametang

#endif // ORM_ORMTYPEDEF_H
