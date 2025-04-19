@interface ICAttachmentImageModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (id)previewItemTitle;
- (id)saveURL;
- (BOOL)hasThumbnailImage;
- (double)placeholderHeight;
- (double)placeholderWidth;
- (BOOL)shouldCropImage;
- (void)addLocation;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;
- (BOOL)canMarkup;
- (BOOL)canSaveURL;
- (id)generateHardLinkURLIfNecessaryForURL:(id)a0;
- (BOOL)hasPreviews;
- (BOOL)needsFullSizePreview;
- (id)placeholderImageSystemName;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })previewImageOrientationTransform;
- (id)previewImageTypeUTI;
- (BOOL)shouldUsePlaceholderBoundsIfNecessary;
- (BOOL)showThumbnailInNoteList;
- (struct CGSize { double x0; double x1; })sizeByCroppingSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)supportsImageClassification;
- (BOOL)supportsOCR;
- (BOOL)supportsQuickLook;
- (void)updateAttachmentSize;
- (void)updateFileBasedAttributes;

@end
