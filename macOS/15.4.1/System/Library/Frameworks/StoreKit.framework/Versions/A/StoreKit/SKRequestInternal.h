@class SKPaymentQueueClient;
@protocol SKRequestDelegate;

@interface SKRequestInternal : NSObject {
    long long _backgroundTaskIdentifier;
    SKPaymentQueueClient *_client;
    id<SKRequestDelegate> _delegate;
    long long _state;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
