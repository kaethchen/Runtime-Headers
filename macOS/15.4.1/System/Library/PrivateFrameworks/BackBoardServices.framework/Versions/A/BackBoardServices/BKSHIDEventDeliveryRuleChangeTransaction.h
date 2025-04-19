@class NSArray, NSString;

@interface BKSHIDEventDeliveryRuleChangeTransaction : NSObject <BSDescriptionStreaming, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long contentsMask;
@property (copy, nonatomic) NSArray *discreteDispatchingRules;
@property (copy, nonatomic) NSArray *deferringRules;
@property (copy, nonatomic) NSArray *keyCommandDispatchingRules;
@property (copy, nonatomic) NSArray *keyCommandsRegistrations;
@property (copy, nonatomic) NSArray *bufferingPredicates;
@property (copy, nonatomic) NSArray *activeUIResponders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToStream:(id)a0;

@end
