@interface AMSRestrictions : NSObject

@property (class, readonly) BOOL allowAccountModifications;
@property (class, readonly) BOOL eroticaAllowed;
@property (class, readonly) BOOL explicitContentAllowed;
@property (class, readonly) BOOL inAppPurchaseAllowed;
@property (class, readonly) long long maximumMediaRank;
@property (class, readonly) BOOL onDeviceDiagnosticsAllowed;
@property (class, readonly, getter=isParentalControlEnabled) BOOL parentalControlEnabled;
@property (class, readonly) BOOL requirePasswordImmediately;

+ (BOOL)allowActiveAccountModifications;
+ (long long)explicitContentSettingForBundleID:(id)a0;
+ (id)rankForMediaType:(unsigned long long)a0;

@end
