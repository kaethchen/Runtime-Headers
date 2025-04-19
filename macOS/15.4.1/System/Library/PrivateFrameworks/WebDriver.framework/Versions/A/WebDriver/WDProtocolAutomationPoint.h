@interface WDProtocolAutomationPoint : RWIProtocolJSONObject

@property (nonatomic) double x;
@property (nonatomic) double y;

- (id)initWithPayload:(id)a0;
- (id)initWithX:(double)a0 y:(double)a1;
- (id)initWithProtocolObject:(id)a0;

@end
