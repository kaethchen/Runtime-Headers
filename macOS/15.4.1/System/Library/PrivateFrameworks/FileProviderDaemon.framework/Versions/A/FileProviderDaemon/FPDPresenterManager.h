@class FPDExtensionManager, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface FPDPresenterManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_promisedPresenters;
    unsigned long long nextPromiseID;
    FPDExtensionManager *_extensionManager;
}

@property (readonly, nonatomic) NSMutableDictionary *presenters;

- (void).cxx_destruct;
- (void)removePresenter:(id)a0;
- (void)addPresenter:(id)a0 itemID:(id)a1 urlHint:(id)a2 auditToken:(struct { unsigned int x0[8]; })a3 promiseID:(unsigned long long)a4;
- (void)forgetPromiseForPresenterWithID:(id)a0 promiseID:(unsigned long long)a1;
- (id)initWithExtensionManager:(id)a0;
- (id)presenterWithID:(id)a0;
- (id)presentersForDomain:(id)a0;
- (unsigned long long)promisePresenterWithID:(id)a0;
- (void)signalPresentersForItemID:(id)a0;

@end
