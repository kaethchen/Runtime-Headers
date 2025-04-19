@interface ILMediaBrowserFacesImageMatrix : ILMediaBrowserImageMatrix {
    long long cellUnderMouseRow;
    long long cellUnderMouseColumn;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)flagsChanged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseMoved:(id)a0;
- (long long)numberOfColumnsForCurrentBounds;
- (void)updateLayoutUsingMaxWidth:(long long)a0;
- (BOOL)wantsFlagsChangedEventsForSkimming;

@end
