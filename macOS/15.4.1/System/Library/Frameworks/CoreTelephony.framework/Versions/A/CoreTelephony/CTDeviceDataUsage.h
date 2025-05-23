@class NSArray, NSMutableDictionary;

@interface CTDeviceDataUsage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long periods;
@property (retain) NSMutableDictionary *apps;
@property (retain) NSMutableDictionary *uninstalledApps;
@property (retain) NSMutableDictionary *proxiedOnlyApps;
@property (retain) NSMutableDictionary *systemServices;
@property (retain) NSMutableDictionary *hiddenApps;
@property (retain) NSArray *wifiAssist;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)appDataUsageForPeriod:(unsigned long long)a0;
- (id)dataUsage:(id)a0 forPeriod:(unsigned long long)a1;
- (id)hiddenAppDataUsageForPeriod:(unsigned long long)a0;
- (id)proxiedOnlyAppDataUsageForPeriod:(unsigned long long)a0;
- (id)systemServiceDataUsageForPeriod:(unsigned long long)a0;
- (id)totalAppDataUsedForPeriod:(unsigned long long)a0;
- (id)totalDataUsage:(id)a0 forPeriod:(unsigned long long)a1;
- (id)totalDataUsedForPeriod:(unsigned long long)a0;
- (id)totalHiddenAppDataUsedForPeriod:(unsigned long long)a0;
- (id)totalProxiedOnlyAppDataUsedForPeriod:(unsigned long long)a0;
- (id)totalSystemServiceDataUsedForPeriod:(unsigned long long)a0;
- (id)totalUninstalledAppDataUsedForPeriod:(unsigned long long)a0;
- (id)totalWifiAssistUsageForPeriod:(unsigned long long)a0;
- (id)uninstalledAppDataUsageForPeriod:(unsigned long long)a0;

@end
