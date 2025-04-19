@class NSString, WDProtocolAutomationSize, WDProtocolAutomationPoint;

@interface WDProtocolAutomationBrowsingContext : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *handle;
@property (nonatomic) BOOL active;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) WDProtocolAutomationSize *windowSize;
@property (retain, nonatomic) WDProtocolAutomationPoint *windowOrigin;

- (id)initWithPayload:(id)a0;
- (id)initWithHandle:(id)a0 active:(BOOL)a1 url:(id)a2 windowSize:(id)a3 windowOrigin:(id)a4;
- (id)initWithProtocolObject:(id)a0;

@end
