@class NSString, HMHomeManager, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _SharedPKHMHomeManager : NSObject <HMHomeManagerDelegate> {
    HMHomeManager *_manager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_fetchCompletions;
    unsigned long long _referenceCount;
    BOOL _didLoadData;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_fetchTimeout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)_performOperationWithHomeManager:(id /* block */)a0;
- (void)_performOperationWithHomes:(id /* block */)a0;
- (void)_withLock_cleanupHomeManagerIfNeeded;
- (void)decrementReferenceCount;
- (void)incrementReferenceCount;

@end
