@interface CalUIViewWithCornerRadius : CalUILayerBackedView {
    double _cornerRadius;
}

@property (nonatomic) double cornerRadius;

- (void)layout;

@end
