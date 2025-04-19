@class NSString;

@interface BKSHIDEventDeliveryRuleWrapper : NSObject <BSDescriptionStreaming, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) id payload;
@property (readonly, nonatomic) unsigned int seed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToStream:(id)a0;
- (id)decodePayload:(id)a0;
- (id)initWithReason:(id)a0 seed:(unsigned int)a1 payload:(id)a2;

@end
