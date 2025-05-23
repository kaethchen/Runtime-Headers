@class NSString;

@interface IMDCoreSpotlightMessageBalloonPluginIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (class, readonly, nonatomic) NSString *timingProfileKey;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_newSummaryTextForPayloadData:(id)a0 item:(id)a1;
+ (id)_pluginPayloadAttachmentPathsForItem:(id)a0;
+ (id)_richLinkMetadataForItem:(id)a0 attachmentPaths:(id)a1 originalURL:(id)a2;
+ (void)indexItem:(id)a0 withChat:(id)a1 isReindexing:(BOOL)a2 metadataToUpdate:(id)a3 timingProfiler:(id)a4;


@end
