@class NSArray;

@interface WDProtocolAutomationInteractionStep : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *states;

- (id)initWithPayload:(id)a0;
- (id)initWithProtocolObject:(id)a0;

@end
