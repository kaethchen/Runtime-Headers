@class NSString, CNFuture;

@interface CNPromise : NSObject <CNPromise>

@property (readonly) CNFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)finishWithError:(id)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)a0;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (BOOL)finishWithResult:(id)a0;
- (id)initWithSchedulerProvider:(id)a0;

@end
