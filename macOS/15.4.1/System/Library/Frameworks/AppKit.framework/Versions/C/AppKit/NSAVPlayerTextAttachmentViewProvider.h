@class NSImage, AVPlayer, __NSTemporaryFileURL;

@interface NSAVPlayerTextAttachmentViewProvider : NSTextAttachmentViewProvider {
    __NSTemporaryFileURL *_temporaryFileURL;
    struct CGSize { double width; double height; } _presentationSize;
    NSImage *_previewImage;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _previewTime;
    BOOL _observed;
}

@property (readonly) struct CGSize { double x0; double x1; } presentationSize;
@property (retain) AVPlayer *avPlayer;
@property double maximumHeight;

+ (id)MIMETypeForFileType:(id)a0;
+ (Class)_AVAssetImageGenerator;
+ (Class)_AVMovieClass;
+ (Class)_AVPlayeItemrClass;
+ (Class)_AVPlayerClass;
+ (Class)_AVPlayerViewClass;
+ (Class)_AVURLAssetClass;
+ (void)_loadAVKit;
+ (BOOL)isPlayableFileType:(id)a0;
+ (id)keyPathsForValuesAffectingPresentationSize;
+ (id)pathExtensionForFileType:(id)a0;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithTextAttachment:(id)a0 parentView:(id)a1 characterIndex:(unsigned long long)a2 layoutManager:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)a0 location:(id)a1 textContainer:(id)a2 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 position:(struct CGPoint { double x0; double x1; })a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (id)initWithTextAttachment:(id)a0 parentView:(id)a1 textLayoutManager:(id)a2 location:(id)a3;
- (void)loadView;
- (id)previewImageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3;

@end
