@interface SACookieHandling : NSObject <SACookieHandlingProtocol>

- (BOOL)appleLaunchMigrationCookieIsSet;
- (BOOL)appleSetupResumeCookieIsSet;
- (BOOL)macBuddyCookieIsSet;
- (BOOL)repairMacBuddyCookieIfNeededWithSoftwareUpdateManager:(id)a0;
- (BOOL)termsOfServiceCookieIsSet;

@end
