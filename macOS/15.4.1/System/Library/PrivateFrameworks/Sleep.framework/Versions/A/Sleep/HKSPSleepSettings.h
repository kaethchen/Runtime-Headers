@class NSSet, NSString, NSDate;
@protocol HKSPSyncAnchor;

@interface HKSPSleepSettings : NSObject <HKSPFeatureSettingsModel, BSDescriptionProviding, HKSPXPCObject, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;

@property (readonly, nonatomic) BOOL sleepTrackingFeatureEnabled;
@property (readonly, nonatomic) BOOL springBoardGreetingDisabled;
@property (readonly, nonatomic) BOOL springBoardSuggestedPageCreated;
@property (readonly, nonatomic) BOOL watchSleepFeaturesEnabled;
@property (readonly, nonatomic) BOOL scheduledSleepMode;
@property (readonly, nonatomic) unsigned long long sleepModeOptions;
@property (readonly, nonatomic) BOOL sleepTracking;
@property (readonly, nonatomic) BOOL timeInBedTracking;
@property (readonly, nonatomic) BOOL bedtimeReminders;
@property (readonly, nonatomic) BOOL wakeUpResults;
@property (readonly, nonatomic) BOOL chargingReminders;
@property (readonly, nonatomic) BOOL shareAcrossDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HKSPSyncAnchor> syncAnchor;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (BOOL)isEquivalentTo:(id)a0;
- (id)initFromObject:(id)a0;
- (void)_migrateForCoder:(id)a0;
- (BOOL)_needsMigrationForCoder:(id)a0;
- (BOOL)isEqualToFeatureSettingsModel:(id)a0;
- (id)objectWithSyncAnchor:(id)a0;

@end
