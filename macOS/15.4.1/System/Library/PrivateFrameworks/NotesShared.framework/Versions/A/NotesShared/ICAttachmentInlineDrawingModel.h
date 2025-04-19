@class PKDrawing;

@interface ICAttachmentInlineDrawingModel : ICAttachmentModel

@property (readonly, nonatomic) PKDrawing *handwritingRecognitionDrawing;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (id)additionalIndexableTextContentInNote;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;
- (id)correctedHardlinkURLFileExtensionForExtension:(id)a0;
- (id)generateHardLinkURLIfNecessaryForURL:(id)a0;
- (BOOL)hasPreviews;
- (BOOL)isIncludedInGenericAttachmentCount;
- (id)newDrawingFromMergeableData;
- (BOOL)preferLocalPreviewImages;
- (BOOL)previewsSupportMultipleAppearances;
- (BOOL)providesStandaloneTitleForNote;
- (id)searchableTextContentInNote;
- (void)setHandwritingRecognitionDrawing:(id)a0;
- (BOOL)shouldShowInContentInfoText;
- (BOOL)shouldSyncPreviewImageToCloud:(id)a0;
- (BOOL)showThumbnailInNoteList;
- (id)standaloneTitleForNote;

@end
