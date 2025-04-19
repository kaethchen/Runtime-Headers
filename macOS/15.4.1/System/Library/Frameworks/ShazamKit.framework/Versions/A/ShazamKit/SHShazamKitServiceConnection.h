@class NSString, NSXPCConnection, SHShazamKitServiceConnectionClient, SHShazamKitServiceConnectionProvider;

@interface SHShazamKitServiceConnection : NSObject <SHShazamKitShazamService>

@property (readonly) SHShazamKitServiceConnectionProvider *connectionProvider;
@property (readonly) NSXPCConnection *connection;
@property (readonly) SHShazamKitServiceConnectionClient *shazamKitClient;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } connectionLock;
@property (weak) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnectionProvider:(id)a0;
- (void)tearDownConnection;
- (void)attachDefaultConnectionHandlers;
- (void)stopRecognition;
- (void)_libraryInfoWithCompletionHandler:(id /* block */)a0;
- (void)_queryLibraryWithParameters:(id)a0 completionHandler:(id /* block */)a1;
- (void)_synchronizeSnapshot:(id)a0 startCondition:(id)a1;
- (void)hapticsForMediaItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)isHapticTrackAvailableForMediaItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)matcher:(id)a0 didProduceResponse:(id)a1;
- (id /* block */)matcherDelegateErrorHandlerForSignature:(id)a0;
- (void)mediaItemsForShazamIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareMatcherForRequestID:(id)a0 completionHandler:(id /* block */)a1;
- (void)startRecognitionForRequest:(id)a0;
- (void)stopRecognitionForRequestID:(id)a0;

@end
