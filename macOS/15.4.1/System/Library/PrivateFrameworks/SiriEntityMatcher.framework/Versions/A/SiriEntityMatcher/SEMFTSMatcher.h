@class NSObject;
@protocol SEMFTSAccessProvider;

@interface SEMFTSMatcher : NSObject {
    NSObject<SEMFTSAccessProvider> *_ftsAccessProvider;
}

- (void).cxx_destruct;
- (id)_allFTSRecordsWithExternalIds:(id)a0 database:(id)a1 error:(id *)a2;
- (id)_matchFTSRecordsWithSearchCriteria:(id)a0 database:(id)a1 error:(id *)a2;
- (id)initWithFTSAccessProvider:(id)a0;
- (id)searchFTSWithCriteria:(id)a0 error:(id *)a1;

@end
