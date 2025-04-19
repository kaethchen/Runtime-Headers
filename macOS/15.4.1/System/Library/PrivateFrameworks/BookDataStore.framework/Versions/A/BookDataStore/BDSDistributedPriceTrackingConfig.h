@class NSArray, BDSDistributedPriceTrackingConfigNotification, NSNumber;

@interface BDSDistributedPriceTrackingConfig : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) BDSDistributedPriceTrackingConfig *disabledConfig;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *itemIDs;
@property (readonly, copy, nonatomic) NSArray *updateScheduleSteps;
@property (readonly, copy, nonatomic) NSNumber *dealAbsoluteThreshold;
@property (readonly, copy, nonatomic) NSNumber *dealRelativeThreshold;
@property (readonly, nonatomic) BDSDistributedPriceTrackingConfigNotification *notification;
@property (readonly, copy, nonatomic) NSNumber *cardLimit;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItemIDs:(id)a0 updateScheduleSteps:(id)a1 dealAbsoluteThreshold:(id)a2 dealRelativeThreshold:(id)a3 notification:(id)a4 cardLimit:(id)a5;

@end
