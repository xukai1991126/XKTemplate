

/**
 *  在.h文件中定义的宏，arc
 *
 *  SISingletonH(name) 这个是宏
 *  + (instancetype)shared##name;这个是被代替的方法， ##代表着shared+name 高度定制化
 * 在外边我们使用 “SISingletonH(gege)” 那么在.h文件中，定义了一个方法"+ (instancetype)sharedgege",所以，第一个字母要大写
 *
 *  @return 一个搞定好的方法名
 */
#define SINGLETON_FOR_CLASS(classname) \
\
static classname *shared##classname = nil; \
\
+ (classname *)sharedInstance \
{ \
@synchronized(self) \
{ \
if (shared##classname == nil) \
{ \
shared##classname = [[self alloc] init]; \
} \
} \
\
return shared##classname; \
} \
\
+ (id)allocWithZone:(NSZone *)zone \
{ \
@synchronized(self) \
{ \
if (shared##classname == nil) \
{ \
shared##classname = [super allocWithZone:zone]; \
return shared##classname; \
} \
} \
\
return nil; \
} \
\
- (id)copyWithZone:(NSZone *)zone \
{ \
return self; \
} \
