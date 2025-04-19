@class NSURL, NSString;

@interface CSUSmileySpotterConfiguration : NSObject

@property (retain) NSURL *headModelURL;
@property (retain) NSString *headModelPath;
@property BOOL sideLoaded;
@property long long revision;
@property float threshold;

+ (id)CSUSmileySpotterConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (id)getConfigurationForCSUSmileySpotter_v1_0_EnglishWithError:(id *)a0;
+ (id)getConfigurationForCSUSmileySpotter_v2_0_EnglishWithError:(id *)a0;
+ (id)overrideWithSideLoadedPathForSmileySpotterModel:(id)a0;

- (void).cxx_destruct;
- (id)initCSUSmileySpotterConfigurationForRevision:(long long)a0 modelPath:(id)a1 threshold:(float)a2;

@end
