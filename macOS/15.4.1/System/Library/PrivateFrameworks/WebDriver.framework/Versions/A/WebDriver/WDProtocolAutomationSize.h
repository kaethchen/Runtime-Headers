@interface WDProtocolAutomationSize : RWIProtocolJSONObject

@property (nonatomic) double width;
@property (nonatomic) double height;

- (id)initWithPayload:(id)a0;
- (id)initWithWidth:(double)a0 height:(double)a1;
- (id)initWithProtocolObject:(id)a0;

@end
