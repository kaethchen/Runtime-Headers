@class NSString, NSArray, NSURL, VNFgBgE5MLInstanceSegmenterThresholds;

@interface VNFgBgE5MLInstanceSegmenterConfiguration : NSObject

@property (readonly) unsigned long long revision;
@property (readonly) struct CGSize { double width; double height; } inputSize;
@property (readonly) int queryNumber;
@property (readonly) int maxSpatialLength;
@property (readonly) int radius;
@property (readonly) NSString *inputImageName;
@property (readonly) NSArray *inputTensorNames;
@property (readonly) NSArray *outputTensorNames;
@property (readonly) NSArray *modelOutputInstanceInvalidMiyoshiCategory;
@property (readonly) NSArray *modelOutputInstanceInvalidCocoCategory;
@property (readonly) NSURL *modelURL;
@property (readonly) VNFgBgE5MLInstanceSegmenterThresholds *thresholds;

+ (id)configurationForRevision:(unsigned long long)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initDefaultConfig;

@end
