@class NSSet, NSObject;
@protocol OS_dispatch_queue, BTMLoginItemControllerDelegate;

@interface BTMLoginItemController : NSObject

@property (retain) NSSet *internalItems;
@property (readonly) unsigned long long typeMask;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, weak) id<BTMLoginItemControllerDelegate> delegate;
@property (readonly) NSSet *items;

- (void)dealloc;
- (void).cxx_destruct;
- (void)fetchLoginItems;
- (void)_setLoginItems:(id)a0;
- (void)_notifyDidChangeItems;
- (void)addLoginItem:(id)a0;
- (void)handleLoginItemsChangeNotification:(id)a0;
- (id)initWithTypeMask:(unsigned long long)a0 delegate:(id)a1;
- (void)removeLoginItem:(id)a0;

@end
