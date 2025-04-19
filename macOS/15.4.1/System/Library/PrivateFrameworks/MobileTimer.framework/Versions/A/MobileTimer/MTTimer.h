@class NSString, NSUUID, NSDictionary, NSDate, MTSound, NSURL;
@protocol MTTimerTime;

@interface MTTimer : NSObject <MTTimerIntentSupport, MTDictionarySerializable, MTScheduleable, MTSerializable, NAEquatable, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *timerID;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double remainingTime;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDictionary *siriContext;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id<MTTimerTime> fireTime;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) MTSound *sound;
@property (copy, nonatomic) NSDictionary *siriContext;
@property (copy, nonatomic) NSDictionary *timerContext;
@property (copy, nonatomic) NSDate *firedDate;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSDate *dismissedDate;
@property (copy, nonatomic) id /* block */ currentDateProvider;
@property (readonly, nonatomic) NSString *timerIDString;
@property (readonly, nonatomic) NSDate *fireDate;
@property (readonly, nonatomic) NSUUID *timerID;
@property (readonly, nonatomic) NSURL *timerURL;
@property (readonly, nonatomic) double remainingTime;
@property (readonly, nonatomic, getter=isFiring) BOOL firing;
@property (readonly, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) BOOL hasDefaultTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionForState:(unsigned long long)a0;
+ (id)_timerTimeForState:(unsigned long long)a0 remainingTime:(double)a1 currentDateProvider:(id /* block */)a2;
+ (id)currentTimerFromTimers:(id)a0;
+ (id)firstActiveTimerFromTimers:(id)a0;
+ (BOOL)isActiveTimer:(id)a0;
+ (id)propertiesAffectingSessions;
+ (BOOL)stateChangeIsAllowableFromState:(unsigned long long)a0 toState:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)_setDuration:(double)a0;
- (void)setFiring:(BOOL)a0;
- (id)_initCommon;
- (BOOL)isCurrentTimer;
- (BOOL)isEqualIgnoringLastModifiedDate:(id)a0;
- (id)timerByUpdatingWithState:(unsigned long long)a0;
- (BOOL)isEqualToTimer:(id)a0;
- (void)_copyStateOntoTimer:(id)a0;
- (BOOL)_isEqualToTimer:(id)a0 checkLastModified:(BOOL)a1;
- (id)initFromDeserializer:(id)a0;
- (id)initWithState:(unsigned long long)a0 duration:(double)a1;
- (id)initWithState:(unsigned long long)a0 duration:(double)a1 currentDateProvider:(id /* block */)a2;
- (id)nextTrigger;
- (id)nextTriggerAfterDate:(id)a0;
- (void)serializeWithSerializer:(id)a0;
- (BOOL)shouldBeScheduled;
- (id)timerByRestarting;
- (id)upcomingTriggersAfterDate:(id)a0;

@end
