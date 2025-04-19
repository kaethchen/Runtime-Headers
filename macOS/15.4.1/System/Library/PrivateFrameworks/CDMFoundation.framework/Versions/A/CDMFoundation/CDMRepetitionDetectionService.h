@class QueryRewriter;
@protocol NLAsset;

@interface CDMRepetitionDetectionService : CDMDAGBaseService {
    id<NLAsset> _nlAsset;
}

@property (retain, nonatomic) QueryRewriter *repetitionDetector;

+ (BOOL)isEnabled;
+ (id)getCDMServiceAssetConfig;

- (void).cxx_destruct;
- (id)setup:(id)a0;
- (id)handle:(id)a0;
- (id)doInference:(id)a0 status:(id *)a1;
- (id)getPredictor:(id)a0 FilesPath:(id)a1 status:(id *)a2;
- (id)handleRequestCommandTypeNames;

@end
