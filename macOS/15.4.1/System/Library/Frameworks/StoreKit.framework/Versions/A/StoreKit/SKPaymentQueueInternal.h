@class NSObject, NSString, NSMutableDictionary, SKPaymentQueueClient, NSMutableArray, SKStorefront;
@protocol OS_dispatch_queue, SKPaymentQueueDelegate;

@interface SKPaymentQueueInternal : NSObject {
    BOOL _isRedemptionSheetShowing;
    BOOL _restoringCompletedTransactions;
    NSString *_identifier;
    SKPaymentQueueClient *_client;
    NSMutableDictionary *_downloads;
    NSMutableArray *_localTransactions;
    NSMutableArray *_transactions;
    SKStorefront *_storefront;
    NSMutableArray *_weakObservers;
    NSObject<OS_dispatch_queue> *_observerQueue;
    id<SKPaymentQueueDelegate> _delegate;
}

- (id)init;
- (void).cxx_destruct;

@end
