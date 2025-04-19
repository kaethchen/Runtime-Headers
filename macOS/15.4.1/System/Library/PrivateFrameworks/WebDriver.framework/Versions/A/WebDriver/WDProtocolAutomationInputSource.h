@class NSString;

@interface WDProtocolAutomationInputSource : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *sourceId;
@property (nonatomic) long long sourceType;

- (id)initWithPayload:(id)a0;
- (id)initWithProtocolObject:(id)a0;
- (id)initWithSourceId:(id)a0 sourceType:(long long)a1;

@end
