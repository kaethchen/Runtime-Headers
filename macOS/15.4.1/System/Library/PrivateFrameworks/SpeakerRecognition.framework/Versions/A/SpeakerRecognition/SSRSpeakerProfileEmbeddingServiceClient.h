@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, SSRSpeakerProfileEmbeddingServiceDelegate;

@interface SSRSpeakerProfileEmbeddingServiceClient : NSObject <SSRSpeakerProfileEmbeddingService>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id remoteObjectProxy;
@property (weak, nonatomic) id<SSRSpeakerProfileEmbeddingServiceDelegate> delegate;
@property (nonatomic) int notifyToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)invalidate;
- (void)_createClientConnection;
- (id)_remoteServiceProxyObjectWithErrorHandler:(id /* block */)a0;
- (void)connectToServiceIfNeeded;
- (oneway void)didFinishProcessingEmbeddingsForLanguageCode:(id)a0 withSuccess:(BOOL)a1;
- (oneway void)refreshEmbeddingsforLanguageCode:(id)a0 withCompletion:(id /* block */)a1;
- (oneway void)speakerProfileEmbeddingsUpdated:(id)a0;

@end
