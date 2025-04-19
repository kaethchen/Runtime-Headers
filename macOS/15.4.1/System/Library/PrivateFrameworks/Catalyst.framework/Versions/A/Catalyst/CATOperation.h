@class _CATObserverManager, NSUUID, NSDictionary, NSArray, NSError, NSDate, NSLock;

@interface CATOperation : NSOperation {
    NSArray *mCallStackSymbols;
    _Atomic int mState;
    NSLock *mLock;
    _CATObserverManager *mObserverManager;
}

@property (retain) NSUUID *UUID;
@property unsigned long long phase;
@property (retain) NSDate *createdDate;
@property (retain) NSDate *enqueuedDate;
@property (retain) NSDate *startedDate;
@property (retain) NSDate *finishedDate;
@property (retain) NSError *error;
@property (retain) NSDictionary *userInfo;
@property (retain) id resultObject;
@property long long completedUnitCount;
@property long long totalUnitCount;
@property (readonly) BOOL isCanceled;
@property (readonly) BOOL canCancel;

+ (id)callStackSymbols;
+ (BOOL)automaticallyNotifiesObserversOfCreatedDate;
+ (BOOL)automaticallyNotifiesObserversOfEnqueuedDate;
+ (BOOL)automaticallyNotifiesObserversOfFinishedDate;
+ (BOOL)automaticallyNotifiesObserversOfStartedDate;
+ (BOOL)automaticallyNotifiesObserversOfUUID;
+ (BOOL)isCancelable;
+ (id)keyPathsForValuesAffectingIsCanceled;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)start;
- (BOOL)isReady;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)stateDescription;
- (void)addTarget:(id)a0 selector:(SEL)a1 forOperationEvents:(unsigned long long)a2;
- (void)addTarget:(id)a0 selector:(SEL)a1 forOperationEvents:(unsigned long long)a2 delegateQueue:(id)a3;
- (void)addTarget:(id)a0 selector:(SEL)a1 forOperationEvents:(unsigned long long)a2 userInfo:(id)a3 delegateQueue:(id)a4;
- (void)endOperationWithResultObject:(id)a0;
- (BOOL)whenStateIs:(int)a0 atomicallySwapWith:(int)a1;
- (void)addTarget:(id)a0 selector:(SEL)a1 forOperationEvents:(unsigned long long)a2 userInfo:(id)a3;
- (void)endOperationSuccessfullyIfNeeded;
- (void)endOperationWithError:(id)a0;
- (void)finalizeOperation;
- (void)operationDidFinish;
- (void)operationWillEnqueueOntoOperationQueue:(id)a0;
- (void)operationWillFinish;
- (void)operationWillStart;

@end
