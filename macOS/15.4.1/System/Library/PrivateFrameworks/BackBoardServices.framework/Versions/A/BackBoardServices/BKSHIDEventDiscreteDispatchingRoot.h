@class NSString, NSArray;

@interface BKSHIDEventDiscreteDispatchingRoot : BKSHIDEventDeliveryRuleWrapper

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) unsigned int seed;
@property (readonly, copy, nonatomic) NSArray *rules;

+ (BOOL)supportsSecureCoding;

- (id)decodePayload:(id)a0;
- (id)initWithReason:(id)a0 seed:(unsigned int)a1 rules:(id)a2;

@end
