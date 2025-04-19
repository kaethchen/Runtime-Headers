@class CXCallDirectoryManager, NSObject;
@protocol OS_dispatch_queue, CXCallDirectoryExtensionManagerDelegate;

@interface CXCallDirectoryExtensionManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CXCallDirectoryExtensionManagerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) CXCallDirectoryManager *manager;
@property (nonatomic) int storeExtensionsChangedNotifyToken;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)_extensionsChanged;
- (void)beginObservingExtensions;
- (void)extensionsWithCompletionHandler:(id /* block */)a0;
- (void)getLastUpdatedCallDirectoryInfoWithReply:(id /* block */)a0;
- (void)setEnabled:(BOOL)a0 forExtension:(id)a1 completion:(id /* block */)a2;
- (void)setPrioritizedExtensionIdentifiers:(id)a0 completionHandler:(id /* block */)a1;

@end
