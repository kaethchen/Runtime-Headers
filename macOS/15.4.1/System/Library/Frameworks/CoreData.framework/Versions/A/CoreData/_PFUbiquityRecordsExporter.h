@class NSString, PFUbiquityLocation, NSMutableDictionary, NSDate, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface _PFUbiquityRecordsExporter : NSObject {
    NSString *_localPeerID;
    NSDate *_lastTransactionDate;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    NSString *_storeName;
    NSLock *_transactionLock;
    NSMutableDictionary *_pendingTransactionsToStoreNameAndTransactionNumber;
    BOOL _pendingTempLogMove;
    BOOL _allowTempLogStorage;
    BOOL _useLocalStorage;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _throwOptimisticLockingException;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (void)managedObjectContextDidSave:(id)a0;

@end
