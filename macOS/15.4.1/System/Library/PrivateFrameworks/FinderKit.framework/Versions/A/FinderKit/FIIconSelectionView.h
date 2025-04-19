@class NSVisualEffectView;

@interface FIIconSelectionView : FI_TIconSelectionView {
    NSVisualEffectView *_visualEffectView;
}

@property (nonatomic) int style;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (double)_cornerRadius;
- (void)updateLayer;

@end
