@class NSNumber;

@interface POPreferences : NSObject

@property (class, readonly, nonatomic) BOOL requireRootCAInSystemTrustStore;
@property (class, readonly, nonatomic) BOOL forceKerberosTGTExchange;
@property (class, readonly, nonatomic) NSNumber *forceExtensionSDKVersion;

+ (id)numberValueForKey:(struct __CFString { } *)a0 defaultValue:(id)a1;
+ (BOOL)boolValueForKey:(struct __CFString { } *)a0 defaultValue:(BOOL)a1;

@end
