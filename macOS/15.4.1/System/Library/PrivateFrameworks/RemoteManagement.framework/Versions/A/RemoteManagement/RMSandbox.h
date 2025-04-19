@interface RMSandbox : NSObject

+ (BOOL)configureSandbox;
+ (long long)consumeToken:(id)a0;
+ (void)releaseToken:(long long)a0;
+ (id)tokenForURL:(id)a0;

@end
