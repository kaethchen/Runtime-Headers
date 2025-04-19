@interface ICPaperKitTextFindingResult : ICTextFindingResult

@property (nonatomic) unsigned long long order;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } searchResultRect;

+ (double)scaleForDrawingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (long long)compare:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForHighlightInTextView:(id)a0;
- (id)framesForHighlightInTextView:(id)a0;
- (void)generateFindPreviewImageForPaperKitAttachment:(id)a0 completion:(id /* block */)a1;
- (void)selectInTextView:(id)a0;

@end
