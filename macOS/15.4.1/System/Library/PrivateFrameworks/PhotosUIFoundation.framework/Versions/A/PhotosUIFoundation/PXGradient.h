@class NSArray;

@interface PXGradient : NSObject

@property (class, readonly, nonatomic) NSArray *opacityValuesForSmoothDescendingGradient;
@property (class, readonly, nonatomic) NSArray *stopLocationsForSmoothDescendingGradient;

+ (id)colorValuesForSmoothDescendingGradientWithBaseColor:(id)a0;

@end
