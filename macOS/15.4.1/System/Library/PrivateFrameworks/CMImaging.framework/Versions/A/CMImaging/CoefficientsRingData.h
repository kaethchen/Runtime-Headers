@class NSDictionary;
@protocol MTLBuffer;

@interface CoefficientsRingData : NSObject

@property (retain, nonatomic) id<MTLBuffer> coefficients;
@property (retain, nonatomic) id coefficientsPixelBuffer;
@property (retain, nonatomic) NSDictionary *learnedStyle;
@property (nonatomic) double pts;
@property (nonatomic) unsigned long long frameID;
@property (nonatomic) int sensorID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } learnedRect;
@property (nonatomic) double globalRemixFactor;

- (void).cxx_destruct;
- (void)releaseResources;

@end
