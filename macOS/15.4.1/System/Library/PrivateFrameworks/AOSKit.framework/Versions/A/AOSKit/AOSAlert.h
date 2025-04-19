@interface AOSAlert : NSObject

+ (BOOL)doDisplayAlert:(id)a0;
+ (void)_updateLastDisplayTimeForAlert:(id)a0;
+ (BOOL)_displayAuthAlert:(id)a0;
+ (BOOL)_displayFileStorageQuotaAlert:(id)a0;
+ (BOOL)_displayMailStorageQuotaAlert:(id)a0;
+ (BOOL)_displayTermsOfServiceAlert:(id)a0;
+ (id)_identifierForAlert:(id)a0;
+ (id)_lastDisplayTimeForAlert:(id)a0;
+ (void)_launchAlertManagerWithProperties:(id)a0;
+ (BOOL)displayAlert:(id)a0;

@end
