@interface PPSDataIngesterCommonUtilities : NSObject

+ (id)allTableNamesForMetadataHistory:(id)a0 withEntryKey:(id)a1;
+ (id)columnNamesForFilepath:(id)a0 dataSource:(id)a1;
+ (id)dataSourceForMetricDefinition:(id)a0;
+ (unsigned long long)directionalityForMetricDefinition:(id)a0;
+ (long long)fileTypeForFilepath:(id)a0;
+ (BOOL)isMetricStorageFilepath:(id)a0;

@end
