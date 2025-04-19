@class PDFPrintViewPrivate;

@interface PDFPrintView : NSView {
    PDFPrintViewPrivate *_private;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)document;
- (BOOL)knowsPageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)printJobTitle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPage:(long long)a0;
- (void)setDocument:(id)a0;
- (void)setPrintJobTitle:(id)a0;

@end
