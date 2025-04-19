@interface MailCoreFramework : NSObject

+ (id)bundle;
+ (void)setUserAgent:(id)a0;
+ (id)userAgent;
+ (BOOL)isRunningInMail;
+ (BOOL)accountsUnavailableFromSpotlightImporter;
+ (BOOL)isRunningInSpotlightImporter;
+ (void)setAccountsUnavailableFromSpotlightImporter:(BOOL)a0;
+ (void)setRunningInSpotlightImporter:(BOOL)a0;

@end
