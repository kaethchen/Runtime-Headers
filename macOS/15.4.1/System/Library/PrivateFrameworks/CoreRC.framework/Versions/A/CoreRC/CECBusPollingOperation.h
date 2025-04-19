@class NSObject, CECInterface;
@protocol OS_dispatch_queue, CECBusPollingOperationDelegate;

@interface CECBusPollingOperation : NSObject {
    CECInterface *_interface;
    unsigned char _initiatorAddress;
    unsigned char _pollingAddress;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) id<CECBusPollingOperationDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void)poll;
- (void)startPolling;
- (void)stopPolling;
- (void)continuePolling;
- (id)initWithInterface:(id)a0 initiator:(unsigned char)a1 queue:(id)a2;

@end
