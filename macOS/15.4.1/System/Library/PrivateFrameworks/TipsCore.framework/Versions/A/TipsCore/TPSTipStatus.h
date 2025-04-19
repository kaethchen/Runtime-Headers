@class NSMutableDictionary, NSSet, NSString, NSArray, NSDictionary, NSDate, NSMutableArray;

@interface TPSTipStatus : NSObject <NSSecureCoding, NSCopying> {
    NSMutableArray *_hintDisplayedDates;
    NSMutableArray *_desiredOutcomePerformedDates;
    NSMutableArray *_hintNotDisplayedDueToFrequencyControlDates;
    NSMutableDictionary *_userInfo;
}

@property (class, readonly, copy, nonatomic) NSSet *_userInfoClasses;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *hintDisplayedDates;
@property (copy, nonatomic) NSArray *desiredOutcomePerformedDates;
@property (copy, nonatomic) NSArray *hintNotDisplayedDueToFrequencyControlDates;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) BOOL overrideHoldout;
@property (nonatomic) BOOL overrideFrequencyControl;
@property (readonly, nonatomic) unsigned long long usageFlags;
@property (nonatomic) long long hintIneligibleReason;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic, getter=isExpired) BOOL expired;
@property (nonatomic, getter=isPreconditionMatched) BOOL preconditionMatched;
@property (copy, nonatomic) NSDate *savedDate;
@property (copy, nonatomic) NSString *variantIdentifier;
@property (copy, nonatomic) NSString *correlationIdentifier;
@property (copy, nonatomic) NSString *clonedFromIdentifier;
@property (copy, nonatomic) NSString *modelVersion;
@property (copy, nonatomic) NSString *lastUsedVersion;
@property (copy, nonatomic) NSDate *dateForTriggerRestartTracking;
@property (copy, nonatomic) NSDate *hintEligibleDate;
@property (copy, nonatomic) NSDate *hintWouldHaveBeenDisplayedDate;
@property (copy, nonatomic) NSDate *hintDismissalDate;
@property (copy, nonatomic) NSDate *contentViewedDate;
@property (copy, nonatomic) NSString *lastDisplayContext;
@property (readonly, nonatomic, getter=isContentViewed) BOOL contentViewed;
@property (readonly, nonatomic, getter=isDesiredOutcomePerformed) BOOL desiredOutcomePerformed;
@property (readonly, nonatomic, getter=isHintDisplayed) BOOL hintDisplayed;
@property (readonly, nonatomic, getter=isHintDisplayedOnCloudDevices) BOOL hintDisplayedOnCloudDevices;
@property (readonly, nonatomic, getter=isHintDisplayedOnAnyDevice) BOOL hintDisplayedOnAnyDevice;
@property (readonly, nonatomic, getter=isHintDismissed) BOOL hintDismissed;
@property (readonly, nonatomic, getter=isHintIneligible) BOOL hintIneligible;

+ (id)_userInfoClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)userInfo;
- (id)initWithIdentifier:(id)a0;
- (void)setUserInfo:(id)a0;
- (unsigned long long)usageFlags;
- (void)addDesiredOutcomePerformedDate:(id)a0;
- (void)addHintDisplayedDate:(id)a0;
- (void)addHintNotDisplayedDueToFrequencyControlDate:(id)a0;
- (id)desiredOutcomePerformedDates;
- (id)hintDisplayedDates;
- (id)hintNotDisplayedDueToFrequencyControlDates;
- (BOOL)isUserKnew;
- (BOOL)reenrollIfAllowed;
- (void)removeHintEligibleDateStatus;
- (void)removeUserInfo;
- (void)setDesiredOutcomePerformedDates:(id)a0;
- (void)setHintDisplayedDates:(id)a0;
- (void)setHintNotDisplayedDueToFrequencyControlDates:(id)a0;
- (void)updateUserInfoValue:(id)a0 forKey:(id)a1;

@end
