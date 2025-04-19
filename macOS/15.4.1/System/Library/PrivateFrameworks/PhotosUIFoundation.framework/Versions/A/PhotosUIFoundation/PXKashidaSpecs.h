@interface PXKashidaSpecs : NSObject

@property (class, readonly, nonatomic) PXKashidaSpecs *defaultSpecs;

@property (readonly, nonatomic) long long maximumNumberOfLinesForTitle;
@property (readonly, nonatomic) long long maximumNumberOfLinesForSubtitle;

- (id)init;
- (id)_init;
- (double)maximumWidthForSubtitle:(id)a0 titleWidth:(double)a1;
- (double)maximumWidthForTitle:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;

@end
