@class NSString, BKSHIDEventKeyCommandsDispatchingRule;

@interface BKSHIDEventKeyCommandDispatchingRoot : BKSHIDEventDeliveryRuleWrapper

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) unsigned int seed;
@property (readonly, copy, nonatomic) BKSHIDEventKeyCommandsDispatchingRule *rule;

+ (BOOL)supportsSecureCoding;

- (id)decodePayload:(id)a0;
- (id)initWithReason:(id)a0 seed:(unsigned int)a1 rule:(id)a2;

@end
