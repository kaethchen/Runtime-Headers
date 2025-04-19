@class NSString;

@interface SLShareableContentActionHandler : NSObject

@property (class, readonly, nonatomic) SLShareableContentActionHandler *sharedActionHandler;

@property (readonly, nonatomic) NSString *frontmostWindowIdentifier;

- (void)performAction:(id)a0;
- (id)frontmostWindow;
- (void)fulfillMetadataAction:(id)a0 response:(id)a1;
- (void)performActions:(id)a0;
- (id)collaborationItemForWindow:(id)a0;
- (void)fulfillAsynchronousMetadataAction:(id)a0 linkMetadata:(id)a1;
- (void)fulfillAsynchronousMetadataAction:(id)a0 response:(id)a1;
- (void)fulfillContentAction:(id)a0 itemProvider:(id)a1;
- (void)fulfillMetadataAction:(id)a0 error:(id)a1;
- (void)fulfillMetadataAction:(id)a0 itemProviders:(id)a1 linkMetadata:(id)a2;
- (void)fulfillMetadataAction:(id)a0 itemProviders:(id)a1 linkMetadata:(id)a2 containerSetupInfo:(id)a3;
- (void)fulfillMetadataAction:(id)a0 itemProviders:(id)a1 linkMetadata:(id)a2 highlightURL:(id)a3 initiatorRequest:(id)a4;
- (void)fulfillMetadataAction:(id)a0 itemProviders:(id)a1 linkMetadata:(id)a2 inPlaceFileURL:(id)a3;
- (void)fulfillMetadataAction:(id)a0 itemProviders:(id)a1 linkMetadata:(id)a2 pendingCollaboration:(id)a3;
- (void)fulfillMetadataAction:(id)a0 itemProviders:(id)a1 linkMetadata:(id)a2 sharingContext:(id)a3;
- (void)performFetchAsynchronousLPMetadataAction:(id)a0;
- (void)performFetchShareableContentAction:(id)a0;
- (void)performFetchShareableContentMetadataAction:(id)a0;
- (void)performSendShareableContentAction:(id)a0;

@end
