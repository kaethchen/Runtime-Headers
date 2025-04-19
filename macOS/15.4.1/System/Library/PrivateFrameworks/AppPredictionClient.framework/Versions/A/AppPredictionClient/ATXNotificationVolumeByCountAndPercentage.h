@class NSString;

@interface ATXNotificationVolumeByCountAndPercentage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned long long dailyNumberOfNotificationsReceivedForBundleID;
@property (readonly, nonatomic) unsigned long long weeklyNumberOfNotificationsReceivedForBundleID;
@property (readonly, nonatomic) double dailyPercentageOfNotificationsReceivedForBundleID;
@property (readonly, nonatomic) double weeklyPercentageOfNotificationsReceivedForBundleID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0 dailyNumberOfNotificationsReceivedForBundleID:(unsigned long long)a1 weeklyNumberOfNotificationsReceivedForBundleID:(unsigned long long)a2 dailyPercentageOfNotificationsReceivedForBundleID:(double)a3 weeklyPercentageOfNotificationsReceivedForBundleID:(double)a4;

@end
