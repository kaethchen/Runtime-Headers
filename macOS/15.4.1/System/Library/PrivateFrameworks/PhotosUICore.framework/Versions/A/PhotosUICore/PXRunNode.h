@class NSSet, NSArray, NSString, PXRunNodeOperation, NSLock;
@protocol PXRunNodeDelegate;

@interface PXRunNode : NSObject <PXRunNode> {
    PXRunNodeOperation *_operation;
}

@property (readonly, nonatomic) NSSet *_dependencySet;
@property (readonly, nonatomic) NSLock *_operationLock;
@property (readonly) unsigned long long state;
@property (readonly, getter=isWaiting) BOOL waiting;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, getter=isCanceled) BOOL canceled;
@property (weak, nonatomic) id<PXRunNodeDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultNodeRunnerWithQualityOfService:(long long)a0;
+ (void)processGraphForRunNode:(id)a0;
+ (void)processGraphForRunNode:(id)a0 withQualityOfService:(long long)a1;

- (id)init;
- (void)run;
- (void).cxx_destruct;
- (void)cancel;
- (void)complete;
- (void)cancelWithError:(id)a0;
- (void)didCancel;
- (void)completeWithError:(id)a0;
- (void)_performChangesToOperation:(id /* block */)a0;
- (id)initWithDependencies:(id)a0;
- (id)newOperation;

@end
