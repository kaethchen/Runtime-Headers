@interface ICAttachmentSystemPaperModel : ICAttachmentPaperBundleModel

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } paperContentBoundsHint;
@property (nonatomic) BOOL hasDeepLink;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (id)account;
- (void)addMergeableDataToCloudKitRecord:(id)a0 approach:(long long)a1 mergeableFieldState:(id)a2;
- (id)additionalIndexableTextContentInNote;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;
- (id)correctedHardlinkURLFileExtensionForExtension:(id)a0;
- (void)fixupMetadataAndMinimumSupportedNotesVersion;
- (id)generateHardLinkURLIfNecessaryForURL:(id)a0;
- (BOOL)isIncludedInGenericAttachmentCount;
- (BOOL)preferLocalPreviewImages;
- (BOOL)previewsSupportMultipleAppearances;
- (id)searchableTextContentInNote;
- (BOOL)shouldShowInContentInfoText;
- (BOOL)shouldSyncPreviewImageToCloud:(id)a0;
- (void)updateAfterLoadWithInlineAttachmentIdentifierMap:(id)a0;

@end
