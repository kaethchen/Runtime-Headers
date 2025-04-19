@class NSURL, NSObject;
@protocol MTLDevice;

@interface CRFormAnalyzerConfiguration : NSObject

@property (nonatomic) BOOL gatingWithOCRResults;
@property (nonatomic) BOOL resizeInputImage;
@property (nonatomic) BOOL tileInputImage;
@property (nonatomic) BOOL useContourBasedDetection;
@property (nonatomic) BOOL useModelBasedDetection;
@property (nonatomic) BOOL useTextBasedDetection;
@property (retain, nonatomic) NSURL *customModelURL;
@property (retain, nonatomic) NSObject<MTLDevice> *metalDevice;
@property (nonatomic) unsigned long long computeDeviceType;

- (id)init;
- (void).cxx_destruct;

@end
