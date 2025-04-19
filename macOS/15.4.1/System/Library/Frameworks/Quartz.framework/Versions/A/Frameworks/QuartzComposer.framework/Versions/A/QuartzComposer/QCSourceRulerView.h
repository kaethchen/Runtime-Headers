@class QCSourceTextView;

@interface QCSourceRulerView : NSRulerView {
    QCSourceTextView *_sourceView;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)requiredThickness;
- (void)setSourceView:(id)a0;

@end
