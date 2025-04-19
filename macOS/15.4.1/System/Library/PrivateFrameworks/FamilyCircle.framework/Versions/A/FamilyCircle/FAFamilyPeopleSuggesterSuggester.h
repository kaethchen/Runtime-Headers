@class NSString;

@interface FAFamilyPeopleSuggesterSuggester : NSObject <FAFamilySuggesterProtocol>

@property (readonly, nonatomic) long long proactiveModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getFamilyRecommendationsWithContext:(id *)a0 error:(id *)a1;

@end
