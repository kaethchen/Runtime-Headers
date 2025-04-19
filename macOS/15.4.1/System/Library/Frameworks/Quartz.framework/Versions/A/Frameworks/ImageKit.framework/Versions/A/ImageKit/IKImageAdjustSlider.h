@class IKCIFilterCorrection, IKScanUIControllerAdvanced, IKImageHistogram, NSString;

@interface IKImageAdjustSlider : NSSlider

@property IKImageHistogram *histogram;
@property IKScanUIControllerAdvanced *scanUIController;
@property double defaultValue;
@property (nonatomic) IKCIFilterCorrection *filterCorrection;
@property (copy) NSString *filterName;
@property (copy) NSString *key;
@property (copy) NSString *prefsKey;

+ (void)initialize;

- (void)dealloc;
- (void)reset;
- (struct CGSize { double x0; double x1; })fittingSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)sliderChanged:(id)a0;
- (void)leftImageClicked:(id)a0;
- (void)rightImageClicked:(id)a0;
- (BOOL)snapsToDefault;

@end
