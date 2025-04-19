@class NSArray;

@interface FigRegWarpPPGPUTuningParams : NSObject

@property (readonly, nonatomic) unsigned int maxNumberOfPyramidLevels;
@property (readonly, nonatomic) BOOL normalizeCornerResponse;
@property (readonly, nonatomic) BOOL performHistEq;
@property (readonly, nonatomic) BOOL useHalfPrecisionCornerResponse;
@property (readonly, nonatomic) NSArray *minCornerResponseThreshold;

- (void).cxx_destruct;
- (int)getMinCornerResponseThreshold:(float *)a0 forBand:(unsigned int)a1;
- (int)readPlist:(id)a0;

@end
