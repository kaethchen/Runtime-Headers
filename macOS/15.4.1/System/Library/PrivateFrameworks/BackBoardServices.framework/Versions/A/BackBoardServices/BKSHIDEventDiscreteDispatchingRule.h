@class BKSHIDEventDiscreteDispatchingPredicate, BKSHIDEventDispatchingTarget, NSString;

@interface BKSHIDEventDiscreteDispatchingRule : NSObject <BSDescriptionStreamable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long predicateEventTypeMask;
@property (readonly, copy, nonatomic) BKSHIDEventDiscreteDispatchingPredicate *predicate;
@property (readonly, copy, nonatomic) BKSHIDEventDispatchingTarget *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleForDispatchingDiscreteEventsMatchingPredicate:(id)a0 toTarget:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)_initWithPredicate:(id)a0 target:(id)a1;

@end
