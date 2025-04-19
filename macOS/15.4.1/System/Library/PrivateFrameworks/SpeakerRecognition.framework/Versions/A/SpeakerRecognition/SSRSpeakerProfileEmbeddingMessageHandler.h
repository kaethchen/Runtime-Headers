@class NSString, NSXPCConnection, SSRVoiceProfileManager, NSObject;
@protocol OS_dispatch_queue, SSRSpeakerProfileEmbeddingServiceDelegate;

@interface SSRSpeakerProfileEmbeddingMessageHandler : NSObject <SSRVoiceProfileManagerDelegate, SSRSpeakerProfileEmbeddingService>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (retain, nonatomic) id<SSRSpeakerProfileEmbeddingServiceDelegate> listenerDelegate;
@property (retain, nonatomic) SSRVoiceProfileManager *voiceProfileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)reset;
- (oneway void)didFinishProcessingEmbeddingsForLanguageCode:(id)a0 withSuccess:(BOOL)a1;
- (oneway void)refreshEmbeddingsforLanguageCode:(id)a0 withCompletion:(id /* block */)a1;
- (void)setupListenerDelegate:(id)a0;
- (void)speakerProfileUpdated:(id)a0;

@end
