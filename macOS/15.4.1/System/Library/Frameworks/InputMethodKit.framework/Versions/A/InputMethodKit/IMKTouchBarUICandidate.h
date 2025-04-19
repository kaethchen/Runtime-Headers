@interface IMKTouchBarUICandidate : IMKUICandidate

@property (nonatomic) long long annotationType;
@property (readonly, nonatomic) double maximumPadding;

- (id)annotationAttributedStringValue;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
