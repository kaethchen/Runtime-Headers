@class NSDate;

@interface WiFiUsageInterfaceStats : NSObject <NSCopying>

@property (nonatomic) unsigned long long txBytes;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) unsigned long long txL3Packets;
@property (nonatomic) unsigned long long rxL3Packets;
@property (copy, nonatomic) NSDate *timestamp;

+ (id)_statsFromMIB:(id)a0;
+ (id)_statsFromNetIF:(id)a0;
+ (id)netIFStatsForInterfaceName:(id)a0;
+ (id)statsForInterfaceName:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToInterfaceStats:(id)a0;

@end
