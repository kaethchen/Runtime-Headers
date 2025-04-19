@interface SFSpeechAnalyzerSpeechDetectorOptions : NSObject

@property (nonatomic) unsigned long long sensitivityLevel;
@property (nonatomic) BOOL reportResults;

- (id)init;
- (id)initWithReportResults:(BOOL)a0;

@end
