@class NSSet, NSObject;
@protocol OS_dispatch_queue, BTMBackgroundItemControllerDelegate;

@interface BTMBackgroundItemController : NSObject

@property (retain) NSSet *internalItems;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (weak) id<BTMBackgroundItemControllerDelegate> delegate;
@property (readonly) NSSet *items;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_notifyDidChangeItems;
- (void)_setBackgroundItems:(id)a0;
- (void)fetchBackgroundTasks;
- (void)handleBackgroundItemsChangeNotification:(id)a0;
- (void)setUserElection:(long long)a0 forBackgroundItem:(id)a1 completion:(id /* block */)a2;
- (void)setUserElection:(long long)a0 forURL:(id)a1 completion:(id /* block */)a2;

@end
