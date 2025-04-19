@class PKPaymentWebService, NSObject;
@protocol PKCloudStoreCoordinatorDelegate, OS_dispatch_queue, PKSecureElementConsistencyCheckerDelegate;

@interface PKSecureElementConsistencyChecker : NSObject {
    id<PKCloudStoreCoordinatorDelegate> _cloudStoreCoordinatorDelegate;
    NSObject<OS_dispatch_queue> *_processingQueue;
    _Atomic BOOL _didStart;
    _Atomic BOOL _invalidated;
}

@property (nonatomic) id<PKSecureElementConsistencyCheckerDelegate> delegate;
@property (retain, nonatomic) PKPaymentWebService *paymentWebService;

+ (BOOL)isCheckingConsistencyForSecureElementID:(id)a0;

- (void).cxx_destruct;
- (void)invalidate;
- (void)_downloadPassesWithCompletion:(id /* block */)a0;
- (void)_rescheduleCheckInTimeInterval:(double)a0 backoffLevel:(long long)a1;
- (void)_rescheduleWithBackoff;
- (void)_syncWithTSMCompletion:(id /* block */)a0;
- (id)initWithPaymentWebService:(id)a0 delegate:(id)a1;
- (id)initWithPaymentWebService:(id)a0 delegate:(id)a1 cloudStoreCoordinatorDelegate:(id)a2;
- (void)queue_startWithCompletion:(id /* block */)a0;
- (void)startWithCompletion:(id /* block */)a0;

@end
