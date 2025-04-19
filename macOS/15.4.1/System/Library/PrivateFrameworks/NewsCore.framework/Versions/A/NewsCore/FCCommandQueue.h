@class NSMutableArray, NSArray, NSString, FCCloudContext, NFUnfairLock, FCKeyValueStore, NSObject;
@protocol FCCommandQueueDelegate, OS_dispatch_group, OS_dispatch_source, OS_dispatch_queue;

@interface FCCommandQueue : NSObject <FCNetworkReachabilityObserving, FCAppActivityObserving, FCCommandDelegate> {
    BOOL _suspended;
    BOOL _executingCommand;
    FCCloudContext *_context;
    NSString *_persistentStorePath;
    NSString *_name;
    FCKeyValueStore *_persistentStore;
    long long _urgency;
    id<FCCommandQueueDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_cooldownTimer;
    NSMutableArray *_pendingCommands;
    NFUnfairLock *_pendingCommandsLock;
    NSObject<OS_dispatch_group> *_pendingCommandsGroup;
    NSObject<OS_dispatch_group> *_executingCommandsGroup;
}

@property (readonly, nonatomic) NSArray *enqueuedCommands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)clear;
- (void)flushWithCompletionHandler:(id /* block */)a0;
- (void)addCommand:(id)a0;
- (void)activityObservingApplicationDidEnterBackground;
- (void)addCommand:(id)a0 saveCompletion:(id /* block */)a1;
- (void)command:(id)a0 didFinishWithStatus:(unsigned long long)a1;
- (id)initWithContext:(id)a0 storeDirectory:(id)a1 storeFilename:(id)a2 urgency:(long long)a3 suspended:(BOOL)a4 delegate:(id)a5;
- (id)initWithContext:(id)a0 urgency:(long long)a1 suspended:(BOOL)a2 delegate:(id)a3;
- (void)networkReachabilityDidChange:(id)a0;

@end
