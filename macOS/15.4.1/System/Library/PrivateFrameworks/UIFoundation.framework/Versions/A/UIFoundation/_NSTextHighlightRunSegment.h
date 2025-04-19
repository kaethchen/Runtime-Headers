@class _NSTextHighlightRun, NSMutableArray, NSTextRange;

@interface _NSTextHighlightRunSegment : NSObject {
    BOOL _isExtraAddedEmptyLine;
    _NSTextHighlightRun *_run;
    unsigned long long _segmentIndex;
    double _topLeftCornerRadius;
    double _topRightCornerRadius;
    double _bottomLeftCornerRadius;
    double _bottomRightCornerRadius;
    NSMutableArray *_cornerExtensions;
    double _leftEnd;
    double _rightEnd;
    NSTextRange *_textRange;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _textSegmentFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _highlightFrame;
}

- (id)description;
- (void).cxx_destruct;
- (void)_calculateHighlightSegmentShape;
- (BOOL)anyRunHasBottomBorderOnPoint:(struct CGPoint { double x0; double x1; })a0 withLeftCornerExtensionDistance:(double *)a1 withRightCornerExtensionDistance:(double *)a2;
- (BOOL)anyRunHasTopBorderOnPoint:(struct CGPoint { double x0; double x1; })a0 withLeftCornerExtensionDistance:(double *)a1 withRightCornerExtensionDistance:(double *)a2;
- (struct CGPoint { double x0; double x1; })bottomLeftCornerPoint;
- (struct CGPoint { double x0; double x1; })bottomRightCornerPoint;
- (struct CGPath { } *)createBottomLeftCornerExtensionWithRadius:(double)a0;
- (struct CGPath { } *)createBottomRightCornerExtensionWithRadius:(double)a0;
- (struct CGPath { } *)createCornerExtensionWithOrigin:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 firstPoint:(struct CGPoint { double x0; double x1; })a2 secondPoint:(struct CGPoint { double x0; double x1; })a3 arcCenter:(struct CGPoint { double x0; double x1; })a4 startAngle:(double)a5 endAngle:(double)a6;
- (struct CGPath { } *)createTopLeftCornerExtensionWithRadius:(double)a0;
- (struct CGPath { } *)createTopRightCornerExtensionWithRadius:(double)a0;
- (BOOL)doesAnySegmentHaveBottomBorderOnPoint:(struct CGPoint { double x0; double x1; })a0 withLeftCornerExtensionDistance:(double *)a1 withRightCornerExtensionDistance:(double *)a2;
- (BOOL)doesAnySegmentHaveTopBorderOnPoint:(struct CGPoint { double x0; double x1; })a0 withLeftCornerExtensionDistance:(double *)a1 withRightCornerExtensionDistance:(double *)a2;
- (BOOL)nextSegmentInCurrentRunIsOnPoint:(struct CGPoint { double x0; double x1; })a0 withLeftCornerExtensionDistance:(double *)a1 withRightCornerExtensionDistance:(double *)a2;
- (BOOL)previousSegmentInCurrentRunIsOnPoint:(struct CGPoint { double x0; double x1; })a0 withLeftCornerExtensionDistance:(double *)a1 withRightCornerExtensionDistance:(double *)a2;
- (struct CGPoint { double x0; double x1; })topLeftCornerPoint;
- (struct CGPoint { double x0; double x1; })topRightCornerPoint;

@end
