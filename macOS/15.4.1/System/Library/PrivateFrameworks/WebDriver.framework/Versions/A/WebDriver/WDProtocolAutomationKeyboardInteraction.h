@class NSString;

@interface WDProtocolAutomationKeyboardInteraction : RWIProtocolJSONObject

@property (nonatomic) long long type;
@property (nonatomic) long long key;
@property (copy, nonatomic) NSString *text;

- (id)initWithPayload:(id)a0;
- (id)initWithType:(long long)a0;
- (id)initWithProtocolObject:(id)a0;

@end
