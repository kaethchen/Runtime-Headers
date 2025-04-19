@class NSURL;

@interface SNLPITFMModelBundle : NSObject

@property (readonly, nonatomic) NSURL *espressoModelURL;
@property (readonly, nonatomic) NSURL *configURL;
@property (readonly, nonatomic) NSURL *contextVocabularyURL;
@property (readonly, nonatomic) NSURL *spanVocabularyURL;
@property (readonly, nonatomic) NSURL *spanMappingURL;
@property (readonly, nonatomic) NSURL *targetVocabularyURL;
@property (readonly, nonatomic) NSURL *versionURL;

+ (id)_errorForMissingResourceURL:(id)a0 errorDomain:(id)a1;
+ (id)_existErrorForEspressoModelURL:(id)a0 configURL:(id)a1 contextVocabularyURL:(id)a2 spanVocabularyURL:(id)a3 spanMappingURL:(id)a4 targetVocabularyURL:(id)a5 versionURL:(id)a6 errorDomain:(id)a7;
+ (id)bundleWithEspressoModelURL:(id)a0 configURL:(id)a1 contextVocabularyURL:(id)a2 spanVocabularyURL:(id)a3 spanMappingURL:(id)a4 targetVocabularyURL:(id)a5 versionURL:(id)a6 errorDomain:(id)a7 error:(id *)a8;

- (void).cxx_destruct;
- (id)_initWithEspressoModelURL:(id)a0 configURL:(id)a1 contextVocabularyURL:(id)a2 spanVocabularyURL:(id)a3 spanMappingURL:(id)a4 targetVocabularyURL:(id)a5 versionURL:(id)a6;

@end
