@interface PXSSliderRow : PXSRow

@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;

- (id)minValue:(double)a0 maxValue:(double)a1;
- (id)createValueView;
- (void)_handleSlider:(id)a0;
- (void)prepareValueViewForReuse:(id)a0;
- (void)updateValueView:(id)a0;

@end
