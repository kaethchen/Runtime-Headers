@class HMFActivity;
@protocol HAP2CoAPIOConsumer;

@interface HAP2CoAPIOThreadQueueEntry : NSObject {
    id<HAP2CoAPIOConsumer> _consumer;
    unsigned long long _operationType;
    id /* block */ _sessionBlock;
    double _timeout;
    HMFActivity *_activity;
}

- (void).cxx_destruct;
- (long long)compare:(id)a0;

@end
