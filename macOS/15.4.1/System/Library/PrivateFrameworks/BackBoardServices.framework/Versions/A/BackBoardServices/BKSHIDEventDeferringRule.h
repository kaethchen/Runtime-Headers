@class NSString, _BKSHIDEventDeferringRuleIdentity, BKSHIDEventDeferringTarget, BKSHIDEventDeferringPredicate;

@interface BKSHIDEventDeferringRule : NSObject <BSDescriptionStreamable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) BKSHIDEventDeferringPredicate *predicate;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringTarget *target;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) _BKSHIDEventDeferringRuleIdentity *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleForDeferringEventsMatchingPredicate:(id)a0 toTarget:(id)a1 withReason:(id)a2 seed:(unsigned int)a3 pid:(int)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)_initWithPredicate:(id)a0 target:(id)a1 reason:(id)a2 identity:(id)a3;
- (long long)mostRecentFirstCompare:(id)a0;
- (long long)weightedDeferringRuleCompare:(id)a0;

@end
