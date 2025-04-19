@interface PPSBasebandRecipeHandler : PPSRecipeHandler

+ (id /* block */)basebandEventRecipe;
+ (id /* block */)basebandHistogramRecipe;
+ (id)eventRecipes;
+ (id)formatBins:(id)a0;
+ (id)metricRecipes;
+ (id)timeSeriesRecipes;

@end
