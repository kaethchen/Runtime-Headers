@interface DMCMobileGestalt : NSObject

+ (id)regionCode;
+ (id)diskUsage;
+ (id)productName;
+ (id)serialNumber;
+ (id)diskCapacity;
+ (id)deviceClass;
+ (id)productType;
+ (id)buildVersion;
+ (id)modelNumber;
+ (id)deviceColor;
+ (BOOL)hasBattery;
+ (BOOL)isWatch;
+ (BOOL)isAppleTV;
+ (BOOL)isHomePod;
+ (id)regionInfo;
+ (BOOL)isPhone;
+ (BOOL)isPad;
+ (id)chipID;
+ (id)deviceUDID;
+ (id)availableCapacity;
+ (BOOL)hasCellularDataCapability;
+ (BOOL)hasTelephonyCapability;
+ (id)supplementalBuildVersion;
+ (BOOL)isAppleSiliconMac;
+ (BOOL)hasBatteryInformationCapability;
+ (id)_overridableGestaltForKey:(struct __CFString { } *)a0 expectedClass:(Class)a1;
+ (id)deviceCapacity;
+ (BOOL)hasInternetTetheringCapability;
+ (BOOL)isVisionDevice;
+ (id)marketingVersion;
+ (id)supplementalMarketingVersion;
+ (id)supplementalMarketingVersionExtra;

@end
