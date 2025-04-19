@class NSString;

@interface SLUEStatisticsModuleIpFeatures : NSObject

@property (nonatomic) NSString *cohortType;
@property (nonatomic) unsigned long long requestCount;
@property (nonatomic) unsigned long long intendedCount;
@property (nonatomic) unsigned long long unintendedCount;
@property (nonatomic) unsigned long long buttonPressCount;
@property (nonatomic) unsigned long long voiceTriggerCount;
@property (nonatomic) unsigned long long voiceTriggerIntendedCount;
@property (nonatomic) unsigned long long voiceTriggerUnintendedCount;
@property (nonatomic) float intendedRatio;
@property (nonatomic) float voiceTriggerRequestRatio;
@property (nonatomic) float voiceTriggerIntendedRatio;
@property (nonatomic) float buttonPressRequestRatio;
@property (nonatomic) float buttonPressIntendedRatio;
@property (nonatomic) float sdsdRetryCount;

- (id)initWithDefaults;

@end
