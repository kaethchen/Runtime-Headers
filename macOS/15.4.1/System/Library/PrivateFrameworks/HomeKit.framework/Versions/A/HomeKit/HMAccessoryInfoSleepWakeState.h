@interface HMAccessoryInfoSleepWakeState : NSObject

@property (readonly) unsigned long long sleepWakeState;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)protoData;
- (id)initWithProtoData:(id)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithSleepWakeState:(unsigned long long)a0;
- (id)protoPayload;

@end
