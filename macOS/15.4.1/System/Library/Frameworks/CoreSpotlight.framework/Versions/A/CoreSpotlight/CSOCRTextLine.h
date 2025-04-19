@class NSString;

@interface CSOCRTextLine : NSObject {
    NSString *_strings[3];
    double _scores[3];
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _textBounds;
    long long _count;
    BOOL _isTitle;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isTitle;
- (void)appendToString:(id)a0;
- (void)addCandidate:(id)a0 confidence:(double)a1;
- (double)candidateConfidenceAtIndex:(int)a0;
- (long long)candidateCount;
- (id)candidateTextAtIndex:(int)a0;
- (id)initWithTextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTitle:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textBounds;

@end
