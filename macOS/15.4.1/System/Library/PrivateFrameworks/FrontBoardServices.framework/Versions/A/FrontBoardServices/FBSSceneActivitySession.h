@class NSString, FBSProcessExecutionPolicy, FBSProcessAssertion, FBSProcessWatchdog;
@protocol FBSSceneHandle, FBSProcess;

@interface FBSSceneActivitySession : NSObject <BSDescriptionProviding> {
    id /* block */ _errorHandler;
    id<FBSProcess> _process;
    FBSProcessAssertion *_assertion;
    FBSProcessWatchdog *_watchdog;
}

@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<FBSSceneHandle> scene;
@property (copy, nonatomic) FBSProcessExecutionPolicy *executionPolicy;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (void)invalidate;
- (void)open;
- (id /* block */)errorHandler;
- (void)setErrorHandler:(id /* block */)a0;
- (BOOL)_isValid;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithName:(id)a0 scene:(id)a1 executionPolicy:(id)a2;

@end
