@interface SPLog : NSObject

+ (id)exec;
+ (id)generic;
+ (BOOL)verboseLoggingEnabled;
+ (void)setVerboseLogging:(BOOL)a0;
+ (id)signposts;
+ (id)measurements;
+ (unsigned long long)generateSignpostID;
+ (id)kext;
+ (id)sampling;

@end
