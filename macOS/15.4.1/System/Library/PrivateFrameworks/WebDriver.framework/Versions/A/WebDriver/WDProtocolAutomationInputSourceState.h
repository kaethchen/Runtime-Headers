@class NSString, NSArray, WDProtocolAutomationPoint, WDProtocolAutomationSize;

@interface WDProtocolAutomationInputSourceState : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *sourceId;
@property (copy, nonatomic) NSString *pressedCharKey;
@property (copy, nonatomic) NSArray *pressedVirtualKeys;
@property (nonatomic) long long pressedButton;
@property (nonatomic) long long mouseInteraction;
@property (nonatomic) long long origin;
@property (copy, nonatomic) NSString *nodeHandle;
@property (retain, nonatomic) WDProtocolAutomationPoint *location;
@property (retain, nonatomic) WDProtocolAutomationSize *delta;
@property (nonatomic) int duration;

- (id)initWithPayload:(id)a0;
- (id)initWithSourceId:(id)a0;
- (id)initWithProtocolObject:(id)a0;

@end
