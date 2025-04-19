@protocol QLPreviewItem;

@interface SearchUIPreviewContainer : NSView <QLPreviewCustomView>

@property struct CGSize { double width; double height; } preferredQuickLookContentSize;
@property (retain) id<QLPreviewItem> previewItem;
@property (readonly) BOOL isLoaded;

- (BOOL)prefersKeepAspectRatio;

@end
