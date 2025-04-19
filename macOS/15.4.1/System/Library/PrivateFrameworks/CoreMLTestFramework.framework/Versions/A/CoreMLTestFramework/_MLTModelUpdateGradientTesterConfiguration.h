@class NSString, _MLTLogger;

@interface _MLTModelUpdateGradientTesterConfiguration : NSObject

@property (retain) NSString *updateableModelPath;
@property (retain) NSString *recipePath;
@property long long computeUnit;
@property (retain) _MLTLogger *logger;
@property BOOL verbose;

- (id)init;
- (void).cxx_destruct;

@end
