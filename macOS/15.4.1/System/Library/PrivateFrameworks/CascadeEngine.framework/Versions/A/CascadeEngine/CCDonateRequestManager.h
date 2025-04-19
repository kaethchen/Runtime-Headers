@class CCDataResourceWriteAccess, CCDifferentialUpdaterFactory, CCDonateRequest, NSObject, CCDonateRequestQueueNode;
@protocol OS_os_transaction, OS_dispatch_queue, CCSetChangeNotifierProtocol;

@interface CCDonateRequestManager : NSObject {
    unsigned int _eventIdCounter;
    unsigned int _transactionCounter;
    NSObject<OS_os_transaction> *_transaction;
    double _donationTimeout;
    NSObject<OS_dispatch_queue> *_registryQueue;
    NSObject<OS_dispatch_queue> *_executionQueue;
    CCDonateRequestQueueNode *_firstNode;
    CCDonateRequestQueueNode *_lastNode;
    CCDonateRequest *_activeRequest;
    id<CCSetChangeNotifierProtocol> _changeNotifier;
    CCDataResourceWriteAccess *_writeAccess;
    BOOL _suspended;
}

@property (readonly, nonatomic) CCDifferentialUpdaterFactory *updaterFactory;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)submitRequest:(id)a0;
- (void)_beginTransaction;
- (void)_enqueue:(id)a0;
- (void)_endTransaction;
- (id)_dequeue;
- (void)_handleNextRequest;
- (BOOL)_isActiveRequestId:(unsigned int)a0;
- (void)completeRequest:(id)a0;
- (id)initWithWriteAccess:(id)a0;
- (id)initWithWriteAccess:(id)a0 changeNotifier:(id)a1 donationTimeout:(double)a2;
- (id)requestAccess:(id *)a0 forResource:(id)a1 withMode:(unsigned long long)a2 error:(id *)a3;

@end
