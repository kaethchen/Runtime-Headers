@class NSArray, NSDictionary;

@interface CIMPunctuationManager : NSObject

@property (readonly, nonatomic) unsigned long long scriptType;
@property (retain, nonatomic) NSArray *punctuationCandidates;
@property (retain, nonatomic) NSArray *sortedPunctuationCandidates;
@property (retain, nonatomic) NSArray *recentActions;
@property (readonly, nonatomic) NSArray *punctuationCandidateSurfaces;
@property (readonly, nonatomic) NSDictionary *punctuationLookupTable;
@property (retain, nonatomic) NSArray *recentPunctuation;
@property (nonatomic) unsigned long long language;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)clearRecentPunctuationCandidate;
- (id)descriptionForPunctuationSurface:(id)a0;
- (void)enumeratePunctuationCandidatesForPunctuation:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePunctuationCandidatesUsingBlock:(id /* block */)a0;
- (id)sortedPunctuationCandidateSurfaces;
- (void)storeRecentPunctuationCandidate:(id)a0;

@end
