@class NSObject, NSString, NSMutableArray, CECFakeInterfaceListener;
@protocol CoreRCInterfaceControllerDelegate, OS_dispatch_queue;

@interface CoreRCInterfaceController : NSObject <CoreRCInterfaceListenerDelegate>

@property (readonly, nonatomic) CECFakeInterfaceListener *fakeInterfaceListener;
@property (nonatomic) id<CoreRCInterfaceControllerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableArray *interfaceListeners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (BOOL)addBundlesFromPaths:(id)a0 expectedClass:(Class)a1;
- (BOOL)addInterfaceListenerClass:(Class)a0;
- (id)firstInterface;
- (void)interfaceListener:(id)a0 didAddInterface:(id)a1;
- (void)interfaceListener:(id)a0 didRemoveInterface:(id)a1;
- (void)startOnQueue:(id)a0;

@end
