@class ICDrawing, ICDrawingVersionedDocument;

@interface ICAttachmentDrawingModel : ICAttachmentModel {
    ICDrawingVersionedDocument *_drawingDocument;
}

@property (nonatomic) BOOL observingAttachment;
@property (readonly, nonatomic) ICDrawing *drawing;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)saveURL;
- (id)initWithAttachment:(id)a0;
- (id)drawingDocument;
- (id)previewImageURL;
- (void)attachmentIsDeallocating:(id)a0;
- (BOOL)canSaveURL;
- (void)drawingPreviewIsUpToDate;
- (BOOL)hasPreviews;
- (BOOL)mergeWithMergeableData:(id)a0 mergeableFieldState:(id)a1;
- (BOOL)preferLocalPreviewImages;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })previewImageOrientationTransform;
- (BOOL)previewsSupportMultipleAppearances;
- (BOOL)shouldSyncPreviewImageToCloud:(id)a0;
- (BOOL)showThumbnailInNoteList;
- (void)startObservingAttachment;
- (void)stopObservingAttachment:(id)a0;
- (BOOL)supportsQuickLook;
- (void)writeMergeableData;

@end
