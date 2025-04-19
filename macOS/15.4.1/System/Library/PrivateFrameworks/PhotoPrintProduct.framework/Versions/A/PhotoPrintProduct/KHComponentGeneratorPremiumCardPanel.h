@interface KHComponentGeneratorPremiumCardPanel : KHComponentGeneratorFoldedSinglePanel {
    struct CGPDFDocument { } *_pdfTemplate;
}

- (void)dealloc;
- (void)drawBackgroundInContext:(struct CGContext { } *)a0 fromLayout:(id)a1 forPath:(struct CGPath { } *)a2 scale:(double)a3;
- (void)fillContext:(struct CGContext { } *)a0 scale:(double)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 renderingIntent:(unsigned long long)a3 section:(long long)a4 progressDelegate:(id)a5;
- (BOOL)hasTemplate;
- (id)initWithComponent:(id)a0 project:(id)a1;
- (double)templateHeight;
- (double)templateWidth;

@end
