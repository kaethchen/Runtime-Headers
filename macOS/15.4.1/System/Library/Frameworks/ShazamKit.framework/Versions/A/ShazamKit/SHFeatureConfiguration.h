@class NSURL;

@interface SHFeatureConfiguration : NSObject

@property (retain) NSURL *cremaModelURL;
@property (retain) NSURL *crepeModelURL;
@property double sampleRate;
@property BOOL isCircularBuffering;

- (void).cxx_destruct;

@end
