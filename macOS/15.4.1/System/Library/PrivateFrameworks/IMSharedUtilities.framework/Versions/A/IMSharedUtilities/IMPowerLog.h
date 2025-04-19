@interface IMPowerLog : NSObject

+ (id)sharedInstance;

- (void)logMessageRead:(id)a0 messageProtocol:(id)a1;
- (void)logMessageSendFailureWithError:(id)a0;
- (void)logEvent:(id)a0 data:(id)a1;
- (void)logMessageDelivered:(id)a0 deliveryDuration:(id)a1 messageProtocol:(id)a2;
- (void)logMessageReceivedWithGUID:(id)a0 fromIdentifier:(id)a1 toIdentifier:(id)a2 conversationType:(unsigned long long)a3 messageType:(unsigned long long)a4 messageProtocol:(id)a5;
- (void)logMessageSentWithGUID:(id)a0 fromIdentifier:(id)a1 toIdentifier:(id)a2 conversationType:(unsigned long long)a3 messageType:(unsigned long long)a4 sendDuration:(id)a5 errorCode:(id)a6 messageProtocol:(id)a7;

@end
