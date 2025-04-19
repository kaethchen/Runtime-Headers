@interface NetworkCapabilities : NSObject

+ (unsigned long long)localCapabilities;
+ (unsigned long long)fastestMethodForFamily:(unsigned long long)a0 inCapabilities:(unsigned long long)a1;
+ (unsigned long long)fillInPotentialCapabilitiesFrom:(unsigned long long)a0;
+ (unsigned long long)detectEnablingPortCapabilities;
+ (unsigned long long)detectEthernetCapabilities;
+ (unsigned long long)detectFirewireCapabilities;
+ (unsigned long long)detectThunderboltCapabilities;
+ (unsigned long long)detectWifiCapabilities;

@end
