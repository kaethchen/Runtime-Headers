@class NSNumber, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_xpcActivityRegisterQueue;
}

@property (readonly, nonatomic) NSMutableDictionary *xpcActivitiesByCKActivityIdentifier;
@property (copy) NSNumber *fakeDeviceCount;
@property double delayAfterXPCActivityRegister;
@property (readonly, nonatomic) NSMutableDictionary *handlersByCKActivityIdentifier;

+ (id)sharedScheduler;
+ (id)activityFromXPCActivity:(id)a0;
+ (id)identifierWithImmediateInvocationForIdentifier:(id)a0;
+ (id)xpcActivityIdentifierForCKActivityIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)submitActivity:(id)a0;
- (void)registerActivityIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)unregisterActivityIdentifier:(id)a0;
- (id)activityForActivityIdentifier:(id)a0;
- (void)cancelActivityWithIdentifier:(id)a0;
- (long long)currentPriorityForActivityIdentifier:(id)a0;
- (BOOL)hasPendingActivityWithActivityIdentifier:(id)a0;
- (id)initInternal;
- (BOOL)isXPCActivityPending:(id)a0;
- (void)performAsyncOnQueue:(id /* block */)a0;
- (void)registerActivityIdentifier:(id)a0 replaceExistingHandler:(BOOL)a1 handler:(id /* block */)a2;
- (void)setXPCActivity:(id)a0 forActivityIdentifier:(id)a1;
- (void)submitActivity:(id)a0 completionHandler:(id /* block */)a1;
- (id)suggestedXPCActivityCriteriaForActivity:(id)a0;
- (void)unregisterHandlerForActivityIdentifier:(id)a0;
- (id)xpcActivityForActivityWithIdentifier:(id)a0;

@end
