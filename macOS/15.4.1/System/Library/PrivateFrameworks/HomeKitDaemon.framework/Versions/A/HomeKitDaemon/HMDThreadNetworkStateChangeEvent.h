@interface HMDThreadNetworkStateChangeEvent : NSObject

@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) long long eventValue;

- (id)description;
- (id)_connectionStateValueToString;
- (id)_eventTypeToString;
- (id)_eventValueToString;
- (id)_nodeTypeValueToString;
- (id)initWithEventType:(long long)a0 eventValue:(unsigned long long)a1;

@end
