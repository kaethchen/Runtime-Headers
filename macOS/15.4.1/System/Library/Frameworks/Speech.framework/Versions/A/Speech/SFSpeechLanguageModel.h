@class NSArray, NSDictionary, NSLocale, SFLocalSpeechRecognitionClient;

@interface SFSpeechLanguageModel : NSObject {
    SFLocalSpeechRecognitionClient *_lsrClient;
}

@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSArray *outOfVocabularyWords;
@property (readonly, copy, nonatomic) NSDictionary *outOfVocabularyWordsAndFrequencies;

+ (void)initialize;
+ (id)supportedLocales;
+ (void)appLmNeedsRebuild:(id)a0 language:(id)a1 clientIdentifier:(id)a2 modelOverride:(id)a3 completion:(id /* block */)a4;
+ (void)prepareCustomLanguageModelForUrl:(id)a0 clientIdentifier:(id)a1 configuration:(id)a2 completion:(id /* block */)a3;
+ (void)prepareCustomLanguageModelForUrl:(id)a0 clientIdentifier:(id)a1 configuration:(id)a2 ignoresCache:(BOOL)a3 completion:(id /* block */)a4;
+ (void)trainAppLmFromNgramCountsArtifact:(id)a0 language:(id)a1 clientIdentifier:(id)a2 writeToDirectory:(id)a3 modelOverride:(id)a4 completion:(id /* block */)a5;
+ (void)trainAppLmFromNgramsSerializedDataFile:(id)a0 customPronsFile:(id)a1 language:(id)a2 writeToDirectory:(id)a3 modelOverride:(id)a4 completion:(id /* block */)a5;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)metrics;
- (id)initWithAssetPath:(id)a0;
- (id)deserializeModelData:(id)a0;
- (long long)lmeThreshold;
- (void)addSentence:(id)a0;
- (id)addOovsFromSentence:(id)a0;
- (BOOL)addProns:(id)a0 forWord:(id)a1;
- (void)addPronsFromFile:(id)a0;
- (void)addSentences:(id)a0;
- (id)createNgramCountsArtifactFromPhraseCountArtifact:(id)a0 writeDirectory:(id)a1;
- (id)createNgramCountsArtifactWithIdentifier:(id)a0 rawPhraseCountsPath:(id)a1 customPronunciationsPath:(id)a2 writeDirectory:(id)a3;
- (id)createPhraseCountsArtifactWithIdentifier:(id)a0 rawPhraseCountsPath:(id)a1 customPronunciationsPath:(id)a2 writeDirectory:(id)a3;
- (void)generateNgramsSerializeDataAndWriteToFile:(id)a0;
- (id)initWithLocale:(id)a0 clientID:(id)a1;
- (BOOL)trainFromPlainTextAndWriteToDirectory:(id)a0;
- (void)trainFromPlainTextAndWriteToDirectory:(id)a0 completion:(id /* block */)a1;

@end
