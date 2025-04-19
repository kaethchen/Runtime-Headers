@class NSString, NSMutableDictionary, LACEnvironmentDependencies, NSObject;
@protocol OS_dispatch_queue;

@interface LACEnvironmentServiceXPCHost : NSObject <LACEnvironmentServiceXPC> {
    LACEnvironmentDependencies *_dependencies;
    NSMutableDictionary *_stateForUser;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)environmentStateForUser:(id)a0 completion:(id /* block */)a1;
- (id)initWithDependencies:(id)a0 workQueue:(id)a1;

@end
