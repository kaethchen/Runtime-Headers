@class MRRMultimodalMentionDetector;
@protocol NLAsset;

@interface CDMMentionDetectorService : CDMDAGBaseService {
    id<NLAsset> _nlAsset;
}

@property (retain, nonatomic) MRRMultimodalMentionDetector *mentionDetector;

+ (BOOL)isEnabled;
+ (id)getCDMServiceAssetConfig;

- (void).cxx_destruct;
- (id)setup:(id)a0;
- (id)handle:(id)a0;
- (id)getPredictor:(id)a0 forLocale:(id)a1 status:(id *)a2;
- (id)handleRequestCommandTypeNames;
- (id)predictWithInput:(id)a0 forLocale:(id)a1 status:(id *)a2;

@end
