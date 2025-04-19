@class NSString, CIFilter;

@interface IKSlider : NSSlider

@property id delegate;
@property double defaultValue;
@property (nonatomic) CIFilter *filter;
@property (copy) NSString *filterName;
@property (copy) NSString *key;

- (void)sliderChanged:(id)a0;
- (void)leftImageClicked:(id)a0;
- (void)rightImageClicked:(id)a0;
- (void)setupWithDelegate:(id)a0 filterArray:(id)a1 filter:(id)a2 key:(id)a3;
- (BOOL)snapsToDefault;

@end
