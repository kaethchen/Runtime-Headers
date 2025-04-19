@class KHProject;

@interface KHProjectPrintView : NSView {
    KHProject *_project;
    long long _currentPage;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)knowsPageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPage:(long long)a0;
- (id)initWithProject:(id)a0;
- (double)_scalingFactor;
- (id)_componentsForProject:(id)a0;
- (id)_newComponentGeneratorForPage:(unsigned long long)a0 inProject:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForPage:(long long)a0 inProject:(id)a1;

@end
