@class NSString, APOdmlRecipe, NSURL, APOdmlTrainingSetBuilder;

@interface APOdmlEvaluator : NSObject <APodmlEvaluatorProtocol>

@property (readonly, nonatomic) APOdmlTrainingSetBuilder *builder;
@property (readonly, nonatomic) APOdmlRecipe *recipe;
@property (readonly, nonatomic) NSURL *modelURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
