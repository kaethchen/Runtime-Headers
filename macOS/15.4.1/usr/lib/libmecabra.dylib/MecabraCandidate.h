@interface MecabraCandidate : NSObject <NSCopying> {
    void *_rawCandidate;
}

@property (readonly, nonatomic) void *rawCandidate;

+ (id)syntheticCandidateFromWords:(id)a0 withLexicon:(struct Lexicon { void *x0; void *x1; } *)a1 language:(int)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)string;
- (id)wordIDs;
- (id)surface;
- (id)analysisString;
- (id)attributes;
- (id)category;
- (id)convertedAnalysisString;
- (id)convertedAnalysisStringForFirstSyllable;
- (id)dictionaryReading;
- (id)initWithCandidate:(void *)a0;
- (id)syllabifiedAnalysisString;
- (id)syllabifiedConvertedAnalysisString;
- (id)syllabifiedDictionaryReading;
- (id)syllablesInAnalysisString;
- (id)syllablesInConvertedAnalysisString;
- (id)syllablesInDictionaryReading;
- (id)syllablesInString:(id)a0 syllableLengths:(id)a1;
- (id)wordReadings;
- (id)words;

@end
