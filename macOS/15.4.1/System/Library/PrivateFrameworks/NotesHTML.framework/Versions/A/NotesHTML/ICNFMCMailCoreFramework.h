@interface ICNFMCMailCoreFramework : NSObject

+ (id)bundle;
+ (void)setUserAgent:(id)a0;
+ (id)userAgent;
+ (BOOL)isRunningInMail;
+ (BOOL)isRunningInSpotlightImporter;
+ (void)setRunningInSpotlightImporter:(BOOL)a0;
+ (int)uniqueIDForMessageURL;

@end
