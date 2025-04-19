@interface OFLogger : NSObject

+ (id)alloc;
+ (void)finalize;
+ (void)initialize;
+ (void)logMessageWithLevel:(long long)a0 file:(const char *)a1 line:(unsigned int)a2 andFormat:(id)a3;

@end
