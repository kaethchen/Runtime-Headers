@class NSString;
@protocol FAMegadomeRecommendationLoading;

@interface FAFamilyMegadomeSuggester : NSObject <FAFamilySuggesterProtocol>

@property (retain, nonatomic) id<FAMegadomeRecommendationLoading> recommendationLoader;
@property (readonly, nonatomic) long long proactiveModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)getFamilyRecommendationsWithContext:(id *)a0 error:(id *)a1;
- (id)initWithRecommendationLoader:(id)a0;
- (id)peopleNotAlreadyInFamilyInPersonArray:(id)a0;
- (id)recommendedFamilyMembersForMegadomeResults:(id)a0;

@end
