@class SLDServiceProxy, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SWShareableContentExtractor : NSObject <SWShareableContentRepresentationProvider, SLDServiceProxyDelegate>

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *contentExtractorQueue;

@property (retain, nonatomic) SLDServiceProxy *serviceProxy;
@property (retain, nonatomic) NSMutableArray *pendingContentExtractionRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_buildStartCollaborationURLForContentSceneIdentifier:(id)a0 shareOptions:(id)a1 recipients:(id)a2 faceTimeConversationUUID:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (id)remoteService;
- (void)retrieveShareableContentWithCompletion:(id /* block */)a0;
- (void)initiateBackgroundCollaborationForContent:(id)a0 faceTimeConversation:(id)a1;
- (void)_addContentExtractionRequest:(id /* block */)a0;
- (void)_processPendingContentExtractionRequests;
- (void)initiateBackgroundCollaborationForContent:(id)a0 recipients:(id)a1 faceTimeConversationUUID:(id)a2;
- (void)initiateBackgroundCollaborationForContent:(id)a0 shareOptions:(id)a1 recipients:(id)a2 faceTimeConversationUUID:(id)a3;
- (void)loadRepresentationForContent:(id)a0 typeIdentifier:(id)a1 itemProviderIndex:(long long)a2 completionHandler:(id /* block */)a3;
- (void)presentMessageComposeSheetForContent:(id)a0 completion:(id /* block */)a1;
- (void)retrieveAsynchronousLPMetadataForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)retrieveAsynchronousLPMetadataForBundleIdentifier:(id)a0 sceneIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)retrieveAsynchronousLPMetadataForSceneIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)retrieveAsynchronousLPMetadataMatchingBundleIdentifier:(id)a0 sceneIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)retrieveAsynchronousLPMetadataWithCompletion:(id /* block */)a0;
- (void)retrieveShareableContentForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)retrieveShareableContentForBundleIdentifier:(id)a0 sceneIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)retrieveShareableContentForSceneIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)retrieveShareableContentMatchingBundleIdentifier:(id)a0 sceneIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)serviceProxyDidConnect:(id)a0;
- (void)serviceProxyDidDisconnect:(id)a0;

@end
