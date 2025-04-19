@class WDProtocolAutomationPoint, WDProtocolAutomationSize;

@interface WDProtocolAutomationRect : RWIProtocolJSONObject

@property (retain, nonatomic) WDProtocolAutomationPoint *origin;
@property (retain, nonatomic) WDProtocolAutomationSize *size;

- (id)initWithPayload:(id)a0;
- (id)initWithOrigin:(id)a0 size:(id)a1;
- (id)initWithProtocolObject:(id)a0;

@end
