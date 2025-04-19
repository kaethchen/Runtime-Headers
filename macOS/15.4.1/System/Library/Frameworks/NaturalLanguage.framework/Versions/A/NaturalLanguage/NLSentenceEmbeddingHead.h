@class NSString, MLModel, NSURL, MLModelConfiguration;

@interface NLSentenceEmbeddingHead : NSObject <NLLogging>

@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) MLModelConfiguration *configuration;
@property (readonly, nonatomic) MLModel *model;
@property (readonly) unsigned long long inputDimension;
@property (readonly) unsigned long long outputDimension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)load;
- (void).cxx_destruct;
- (BOOL)isLoaded;
- (id)initWithModelURL:(id)a0;
- (id)getSentenceEmbeddingFromPooledTokenEmbeddings:(id)a0 error:(id *)a1;

@end
