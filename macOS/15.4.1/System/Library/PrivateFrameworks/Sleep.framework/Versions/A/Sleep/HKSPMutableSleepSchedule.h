@class HKSPChangeSet, NSSet, HKSPSleepScheduleDayOccurrence, NSString, NSDate;
@protocol HKSPObject;

@interface HKSPMutableSleepSchedule : HKSPSleepSchedule <HKSPMutableObject>

@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long windDownMinutes;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *mondayOccurrence;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *tuesdayOccurrence;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *wednesdayOccurrence;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *thursdayOccurrence;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *fridayOccurrence;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *saturdayOccurrence;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *sundayOccurrence;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *overrideDayOccurrence;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) double windDownTime;
@property (nonatomic) double sleepDurationGoal;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) HKSPChangeSet *changeSet;
@property (readonly, nonatomic) id<HKSPObject> originalObject;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)freeze;
- (void)revert;
- (id)initFromObject:(id)a0;
- (void)saveOccurrence:(id)a0;
- (void)_freezeSavedOccurrence:(id)a0;
- (BOOL)_hasChangeForDayOccurrenceKey:(id)a0 dayOccurrence:(id)a1;
- (BOOL)_hasChangeToScheduleEnabled;
- (void)_modifyDayOccurrencesForWeekdays:(unsigned long long)a0 block:(id /* block */)a1;
- (BOOL)_shouldRemoveOverrideOccurrence:(id)a0;
- (void)_updateBackingOccurrencesForOccurrence:(id)a0;
- (void)_updateOverrideOccurrenceForOccurrence:(id)a0;
- (id)_updatedDayOccurrence:(id)a0 withDayOccurrence:(id)a1;
- (BOOL)hasChangeAffectingScheduling;
- (BOOL)hasChangeToSleepDurationGoal;
- (BOOL)hasChangeToWindDownTime;
- (BOOL)hasOverrideOccurrenceRemoval;
- (id)lastOverrideOccurrenceWakeUpComponents;
- (void)removeOccurrence:(id)a0;
- (void)setWindDownMinutes:(unsigned long long)a0;

@end
