@interface SASSystemInformation : NSObject

+ (id)productVersion;
+ (id)deviceClass;
+ (id)productType;
+ (long long)compareProductVersion:(id)a0 toProductVersion:(id)a1;

@end
