@class NSString, NSXPCConnection, NSMutableDictionary, NSMutableSet, NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessClientLocalArbiterInterface, NSXPCListenerDelegate, NSXPCConnectionDelegate> {
    NSXPCConnection *_server;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_presentersByID;
    NSMutableDictionary *_presenterMessengersByID;
    NSMutableSet *_providers;
    NSMapTable *_providerMessengersByID;
    BOOL _disableFileProviderReregistration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_accessPresenterOperationRecordsUsingBlock:(id /* block */)a0;
+ (id)_fileReactorDebuggingInformation;
+ (id)_idForReactor:(id)a0;
+ (id)_willBeginOperationForReactor:(id)a0 withDescription:(id)a1;

- (void)dealloc;
- (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
- (oneway void)revokeSubarbitrationClaimForID:(id)a0;
- (id)_onqueue_filePresenters;
- (id)_onqueue_fileProviders;
- (void)addFilePresenter:(id)a0;
- (void)addFileProvider:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)cancelAccessClaimForID:(id)a0;
- (id)filePresenters;
- (id)fileProviders;
- (void)getDebugInfoWithCompletionHandler:(id /* block */)a0;
- (id)grantAccessClaim:(id)a0 synchronouslyIfPossible:(BOOL)a1;
- (void)grantSubarbitrationClaim:(id)a0 withServer:(id)a1;
- (void)handleCanceledServer;
- (id)idForFileReactor:(id)a0;
- (id)initWithServer:(id)a0 queue:(id)a1;
- (BOOL)itemHasPresentersAtURL:(id)a0;
- (void)performBarrier;
- (void)performBarrierAsync:(id /* block */)a0;
- (void)removeFilePresenter:(id)a0;
- (void)removeFileProvider:(id)a0;
- (oneway void)revokeAccessClaimForID:(id)a0;
- (id)sandboxExtensionForRelatedPath:(id)a0 primaryPath:(id)a1 error:(id *)a2;
- (void)setAutomaticFileProviderReregistrationDisabled:(BOOL)a0;
- (oneway void)tiePresenterForID:(id)a0 toItemAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didChangeItemAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didChangeSharingOfItemAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didChangeUbiquityAttributes:(id)a1 ofItemAtURL:(id)a2;
- (oneway void)writerWithPurposeID:(id)a0 didChangeUbiquityOfItemAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didDisconnectItemAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didMakeItemDisappearAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didMoveItemAtURL:(id)a1 toURL:(id)a2;
- (oneway void)writerWithPurposeID:(id)a0 didReconnectItemAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didVersionChangeOfKind:(id)a1 toItemAtURL:(id)a2 withClientID:(id)a3 name:(id)a4;

@end
