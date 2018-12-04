/*
 * rWebCfgRegister.h
 *
 *  Created on: 2018-9-14
 *      Author: xm
 */

#ifndef RWEBCFGREGISTER_H_
#define RWEBCFGREGISTER_H_

#ifdef __cplusplus    //__cplusplus是cpp中自定义的一个宏
extern "C" {          //告诉编译器，这部分代码按C语言的格式进行编译，而不是C++的
#endif

extern int register_sock_fd;
int register_deviceInfo();

#ifdef __cplusplus
}
#endif

#endif /* RWEBCFGREGISTER_H_ */
