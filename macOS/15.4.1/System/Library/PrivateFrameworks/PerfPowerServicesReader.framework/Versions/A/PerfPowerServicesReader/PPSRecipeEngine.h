@class NSMutableDictionary;

@interface PPSRecipeEngine : NSObject

@property (retain) NSMutableDictionary *eventRecipeHandlers;
@property (retain) NSMutableDictionary *metricRecipeHandlers;
@property (retain) NSMutableDictionary *timeSeriesRecipeHandlers;

+ (id)sharedInstance;
+ (id)recipeHandlers;

- (id)init;
- (void).cxx_destruct;
- (void)setupHandlers;
- (id)createEventRecipeForMetric:(id)a0;
- (id)createMetricRecipeForMetric:(id)a0;
- (id)createTimeSeriesRecipeForMetric:(id)a0;
- (id)executeEventRecipe:(id)a0 on:(id)a1 metrics:(id)a2 error:(id *)a3;
- (id)executeMetricRecipe:(id)a0 on:(id)a1 metric:(id)a2 error:(id *)a3;
- (id)executeTimeSeriesRecipe:(id)a0 on:(id)a1 metrics:(id)a2 error:(id *)a3;
- (void)registerHandlersForClass:(Class)a0;

@end
