@class NSString, _EXQueryController, NSObject;
@protocol OS_dispatch_queue;

@interface PMPrintServiceExtension_Browser : NSObject <_EXQueryControllerDelegate> {
    _EXQueryController *_queryController;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ foundPrinters;
@property (copy) id /* block */ foundBrowserNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)start;
- (id)initWithQueue:(id)a0;
- (void)_postAvailableDests:(id)a0 forContext:(id)a1;
- (void)_internalizeInfos:(id)a0 forContext:(id)a1;
- (void)_proxyReceived:(id)a0 forContext:(id)a1;
- (void)_queryPendedDests:(id)a0 forContext:(id)a1;
- (void)fetchChildrenForNode:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)queryControllerDidUpdate:(id)a0 difference:(id)a1;

@end
