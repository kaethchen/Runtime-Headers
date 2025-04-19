@class CLSServiceManager;

@interface PGSharingSuggestionSourceMergeCandidates : PGSharingSuggestionPhotoKitBasedSource {
    CLSServiceManager *_serviceManager;
}

- (id)name;
- (void).cxx_destruct;
- (double)weight;
- (id)details;
- (id)initWithServiceManager:(id)a0;
- (BOOL)canRunWithOptions:(id)a0;
- (id)filterMeNodePredicateForInput:(id)a0 photoLibrary:(id)a1;
- (id)suggestedResultsForInput:(id)a0 withOptions:(id)a1;

@end
