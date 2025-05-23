@class NSUUID, NSString, NSURL, AVAsset, ICAttachment;

@interface ICAttachmentModel : NSObject <ICAttachmentModelUI>

@property BOOL previewGenerationOperationCancelled;
@property (readonly, nonatomic) double placeholderWidth;
@property (readonly, nonatomic) double placeholderHeight;
@property (readonly, weak, nonatomic) ICAttachment *attachment;
@property (readonly, nonatomic) BOOL shouldShowInContentInfoText;
@property (readonly, nonatomic) BOOL isIncludedInGenericAttachmentCount;
@property (nonatomic, getter=isMergeableDataDirty) BOOL mergeableDataDirty;
@property (readonly, copy, nonatomic) NSUUID *currentReplicaID;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (readonly, nonatomic) BOOL hasPreviews;
@property (readonly, nonatomic) BOOL previewsSupportMultipleAppearances;
@property (readonly, nonatomic) BOOL preferLocalPreviewImages;
@property (readonly, nonatomic) BOOL needsFullSizePreview;
@property (readonly, nonatomic) BOOL requiresPostProcessing;
@property (readonly, nonatomic) BOOL supportsOCR;
@property (readonly, nonatomic) BOOL supportsImageClassification;
@property (readonly, nonatomic) NSString *previewImageTypeUTI;
@property (readonly, nonatomic) NSString *hardLinkVersion;
@property (readonly, nonatomic) BOOL hasThumbnailImage;
@property (readonly, nonatomic) BOOL showThumbnailInNoteList;
@property (readonly, nonatomic) BOOL canMarkup;
@property (readonly, nonatomic) BOOL supportsQuickLook;
@property (readonly, nonatomic) NSURL *saveURL;
@property (readonly, nonatomic) BOOL canSaveURL;
@property (readonly, nonatomic) BOOL canSaveURLWithOtherAttachments;
@property (nonatomic, getter=isGeneratingPreviews) BOOL generatingPreviews;
@property (nonatomic) BOOL hasDeepLink;
@property (readonly, nonatomic) BOOL shouldUsePlaceholderBoundsIfNecessary;
@property (readonly, nonatomic) NSString *placeholderImageSystemName;
@property (readonly, nonatomic) AVAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;
+ (void)deletePreviewItemHardLinkURLs;
+ (Class)modelClassForAttachmentType:(short)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)providerDataTypes;
- (id)providerFileTypes;
- (id)localizedFallbackTitle;
- (id)initWithAttachment:(id)a0;
- (BOOL)shouldCropImage;
- (void)addLocation;
- (void)addMergeableDataToCloudKitRecord:(id)a0 approach:(long long)a1 mergeableFieldState:(id)a2;
- (id)additionalIndexableTextContentInNote;
- (void)assetWithCompletion:(id /* block */)a0;
- (void)attachmentAwakeFromFetch;
- (void)attachmentDidRefresh:(BOOL)a0;
- (void)attachmentIsDeallocating:(id)a0;
- (void)attachmentWillRefresh:(BOOL)a0;
- (void)attachmentWillTurnIntoFault;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;
- (id)correctedHardlinkURLFileExtensionForExtension:(id)a0;
- (id)dataForQuickLook;
- (id)dataForTypeIdentifier:(id)a0;
- (void)deleteChildAttachments;
- (id)fileURLForTypeIdentifier:(id)a0;
- (id)generateHardLinkURLIfNecessaryForURL:(id)a0;
- (id)generateHardLinkURLIfNecessaryForURL:(id)a0 withFileName:(id)a1;
- (id)generateTemporaryURLWithExtension:(id)a0;
- (id)hardLinkFolderURL;
- (BOOL)hidesSubAttachmentsInAttachmentBrowser;
- (BOOL)isReadyToPresent;
- (id)localizedFallbackSubtitleIOS;
- (id)localizedFallbackSubtitleMac;
- (void)mergeMergeableDataFromCloudKitRecord:(id)a0 approach:(long long)a1 mergeableFieldState:(id)a2;
- (BOOL)mergeWithMergeableData:(id)a0;
- (BOOL)mergeWithMergeableData:(id)a0 mergeableFieldState:(id)a1;
- (id)mergeableDataForCopying;
- (id)mergeableDataForCopying:(id *)a0;
- (void)persistPendingChanges;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })previewImageOrientationTransform;
- (BOOL)providesStandaloneTitleForNote;
- (BOOL)providesTextContentInNote;
- (void)redactAuthorAttributionsToCurrentUser;
- (void)regenerateTextContentInNote;
- (void)removeTimestampsForReplicaID:(id)a0;
- (void)replaceChildInlineAttachment:(id)a0 withText:(id)a1;
- (id)searchableTextContent;
- (id)searchableTextContentForLocation;
- (id)searchableTextContentInNote;
- (short)sectionForSubAttachments;
- (BOOL)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)a0;
- (BOOL)shouldSyncPreviewImageToCloud:(id)a0;
- (id)standaloneTitleForNote;
- (id)textContentInNote;
- (id)titleForSubAttachment:(id)a0;
- (void)undeleteChildAttachments;
- (void)updateAfterLoadWithInlineAttachmentIdentifierMap:(id)a0;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)a0;
- (void)updateAttachmentMarkedForDeletionStateAttachmentIsInUse:(BOOL)a0;
- (void)updateAttachmentSize;
- (void)updateFileBasedAttributes;
- (BOOL)usesChildAttachment:(id)a0;
- (void)willMarkAttachmentForDeletion;
- (void)writeMergeableData;

@end
