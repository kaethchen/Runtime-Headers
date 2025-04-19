@class PLAssetsdNonBindingDebugClient, PLAssetsdClientXPCConnection, PLAssetsdLibraryManagementClient, PLAssetsdPrivacySupportClient, PLAssetsdSystemLibraryURLReadOnlyClient, PLAssetsdClientState, PLAssetsdDemoClient, NSObject;
@protocol OS_dispatch_queue;

@interface PLNonBindingAssetsdClient : NSObject {
    PLAssetsdClientState *_clientState;
    PLAssetsdClientXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    PLAssetsdSystemLibraryURLReadOnlyClient *_systemLibraryURLReadOnlyClient;
    PLAssetsdLibraryManagementClient *_libraryManagementClient;
    PLAssetsdDemoClient *_demoClient;
    PLAssetsdPrivacySupportClient *_privacySupportClient;
    PLAssetsdNonBindingDebugClient *_nonBindingDebugClient;
}

@property (readonly) PLAssetsdSystemLibraryURLReadOnlyClient *systemLibraryURLReadOnlyClient;
@property (readonly) PLAssetsdLibraryManagementClient *libraryManagementClient;
@property (readonly) PLAssetsdDemoClient *demoClient;
@property (readonly) PLAssetsdPrivacySupportClient *privacySupportClient;
@property (readonly) PLAssetsdNonBindingDebugClient *nonBindingDebugClient;

- (id)init;
- (void).cxx_destruct;
- (void)_updateLibraryStateConnectionInterrupted:(id)a0;

@end
