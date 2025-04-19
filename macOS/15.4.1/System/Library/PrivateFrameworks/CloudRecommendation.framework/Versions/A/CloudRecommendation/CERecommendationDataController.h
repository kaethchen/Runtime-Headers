@class ACAccount;

@interface CERecommendationDataController : NSObject {
    ACAccount *_account;
}

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)fetchCompletedRecommendations:(id)a0 completion:(id /* block */)a1;
- (void)fetchCompletedRecommendations:(id)a0 recommendationInfo:(id)a1 completion:(id /* block */)a2;
- (void)fetchRecommendationsRulesetWithCompletion:(id /* block */)a0;
- (void)fetchRecommendationsRulesetWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)fetchRecommendationsWithCompletion:(id /* block */)a0;
- (void)fetchRecommendationsWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)sendRecommendationStatus:(id)a0 configuration:(id)a1 recommendationIdentifiers:(id)a2 storageRecovered:(id)a3 completion:(id /* block */)a4;

@end
