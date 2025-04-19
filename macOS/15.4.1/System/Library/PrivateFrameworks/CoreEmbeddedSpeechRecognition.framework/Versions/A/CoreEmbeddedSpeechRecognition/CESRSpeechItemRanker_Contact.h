@class NSString, NSMutableSet, NSObject;
@protocol CESRPriorRetriever;

@interface CESRSpeechItemRanker_Contact : CESRSpeechItemRanker {
    NSObject<CESRPriorRetriever> *_priorRetriever;
    NSString *_trialContactRankingStrategy;
    BOOL _didFetchExperiments;
    NSMutableSet *_codepathIds;
}

- (void).cxx_destruct;
- (BOOL)addSet:(id)a0;
- (void)_activateEnrolledTrialExperiments;
- (BOOL)enumerateRankedItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)getActivatedCodepathIds;
- (id)getAllCodepathIds;
- (id)initWithInstance:(id)a0 speechProfileSite:(id)a1 categoryGroup:(id)a2;
- (id)initWithInstance:(id)a0 speechProfileSite:(id)a1 categoryGroup:(id)a2 priorRetriever:(id)a3;

@end
