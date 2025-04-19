@protocol IMAPUserAgent;

@interface IMAPFramework : NSObject

@property (class, retain) id<IMAPUserAgent> userAgent;

+ (id)bundle;
+ (BOOL)logsIMAPErrors;
+ (void)setLogsIMAPErrors:(BOOL)a0;

@end
