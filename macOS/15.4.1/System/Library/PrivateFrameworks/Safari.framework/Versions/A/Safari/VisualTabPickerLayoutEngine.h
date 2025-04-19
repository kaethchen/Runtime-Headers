@protocol VisualTabPickerLayoutEngineInputProvider;

@interface VisualTabPickerLayoutEngine : NSObject {
    double _tileWidth;
    double _tileHeight;
    double _horizontalMargin;
    double _horizontalInset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    double _tileHeightToWidthRatio;
    BOOL _leftToRight;
}

@property (readonly, weak, nonatomic) id<VisualTabPickerLayoutEngineInputProvider> inputProvider;
@property (readonly, nonatomic) unsigned long long numberOfTiles;
@property (readonly, nonatomic) unsigned long long maximumTilesPerRow;

- (id)init;
- (void).cxx_destruct;
- (void)recomputeLayout;
- (double)_computedHorizontalMargin;
- (void)_recomputeHorizontalInsets;
- (void)_recomputeMaximumTilesPerRow;
- (void)_recomputeTileSize;
- (double)_topMargin;
- (void)_updateInputs;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForTileAtIndex:(unsigned long long)a0;
- (id)initWithInputProvider:(id)a0;

@end
