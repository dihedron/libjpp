/*
 * Exception.cc
 * Copyright (C) 2016 Andrea Funto' <dihedron.dev@gmail.com>
 * See LICENSE for details and terms of use.
 */

#include <java/lang/Exception.h>
#include <java/lang/Class.h>

namespace java {
	namespace lang {

		const Class Exception::klass("java.lang.Exception", Throwable::klass);

		Exception & Exception::operator=(Exception const & other) {
			if(this != &other) {
				Throwable::operator=((Throwable const &)other);
				//((Throwable *)this)->operator=((Throwable const &)other);
			}
			return *this;
		}
	}
}