@class QLPreviewPageLayer, QLPreviewPageNavigationView;

@interface QLPreviewPageThumbnail : NSObject

@property (weak) QLPreviewPageNavigationView *navigationView;
@property (retain, nonatomic) QLPreviewPageLayer *pageLayer;
@property unsigned long long page;
@property (nonatomic) struct CGSize { double width; double height; } pageSize;
@property (nonatomic) int highlightMode;
@property (nonatomic) BOOL generating;
@property (nonatomic) struct CGImage { } *pageContents;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property double contentsScale;
@property (readonly) BOOL done;

- (void)dealloc;
- (void).cxx_destruct;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)a0;

@end
