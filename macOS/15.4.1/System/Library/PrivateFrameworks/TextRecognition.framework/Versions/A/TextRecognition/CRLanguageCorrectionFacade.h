@class NSDictionary, CRLanguageCorrection, CRPerformanceStatistics;

@interface CRLanguageCorrectionFacade : NSObject

@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) CRLanguageCorrection *languageCorrection;
@property (retain, nonatomic) CRPerformanceStatistics *languageCorrectionStats;

+ (id)supportedLanguagesForRevision:(unsigned long long)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)applyLanguageCorrectionToResults:(id)a0 image:(id)a1 latticeResults:(id *)a2 progressHandler:(id /* block */)a3;
- (id)initWithRevision:(unsigned long long)a0 localeCode:(id)a1 customWords:(id)a2 options:(id)a3;
- (BOOL)lmValidateProbability:(id)a0 options:(id)a1;
- (BOOL)validateProbability:(id)a0 validRangeMin:(double)a1 validRangeMax:(double)a2 options:(id)a3;

@end
