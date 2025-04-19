@interface C2DeviceInfo : NSObject

+ (BOOL)isAppleInternal;
+ (id)productName;
+ (id)processName;
+ (id)productVersion;
+ (id)productType;
+ (id)processUUID;
+ (id)buildVersion;
+ (id)processVersion;
+ (id)testName;
+ (BOOL)whitelistedForDisableAPWakeOnIdleConnections;

@end
