@interface PPSOnDeviceIngesterUtilities : NSObject

+ (id)allDataSourcesForSubsystem:(id)a0 category:(id)a1;
+ (id)dataSourceForSubsystem:(id)a0 category:(id)a1;
+ (id)filepathForMetricDefinition:(id)a0;
+ (id)filepathForSubsystem:(id)a0 category:(id)a1;
+ (id)metricDefinitionForSubsystem:(id)a0 category:(id)a1 metricName:(id)a2;
+ (id)metricDefinitionHistoryForSubsystem:(id)a0 category:(id)a1 metricName:(id)a2;

@end
