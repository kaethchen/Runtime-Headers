@interface QCPatchManagerView : GFNodeManagerView {
    void *_unused2[4];
}

+ (void)initialize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)_compareNode:(id)a0 withNode:(id)a1 usingColumnIdentifier:(id)a2 ascending:(BOOL)a3;
- (id)_cellContentForNode:(id)a0 columnIdentifier:(id)a1;
- (id)_filterStringsForNode:(id)a0;

@end
