@class NSString, JSContext, NSOperationQueue, NSError;

@interface MTJSContextEventFilter : NSObject <MTEventFilter>

@property (retain) NSString *script;
@property (retain) NSString *functionName;
@property (retain) JSContext *jsContext;
@property (retain) NSError *lastError;
@property (retain) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)apply:(id)a0;
- (void)_applyFilter:(id)a0 promise:(id)a1;
- (id)initWithJSContext:(id)a0 functionName:(id)a1 operationQueue:(id)a2;
- (id)initWithScript:(id)a0 functionName:(id)a1 operationQueue:(id)a2;

@end
