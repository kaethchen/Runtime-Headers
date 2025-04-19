@interface CalUIListViewCellBackground : CalUILayerBackedView {
    double _cornerRadius;
}

+ (BOOL)drawsBackgroundForEvent:(id)a0;

- (void)layout;
- (id)initWithCornerRadius:(double)a0;
- (id)_angleStripedBackgroundColor;
- (id)_angleStripedBackgroundImage;
- (void)_configureLayer:(id)a0;
- (void)_updateBackgroundWithSolidColor:(id)a0 stripedColor:(id)a1 dimmed:(BOOL)a2;
- (long long)_userInterfaceStyle;
- (void)updateBackgroundColorForEvent:(id)a0 dimmed:(BOOL)a1 dragPreview:(BOOL)a2;

@end
