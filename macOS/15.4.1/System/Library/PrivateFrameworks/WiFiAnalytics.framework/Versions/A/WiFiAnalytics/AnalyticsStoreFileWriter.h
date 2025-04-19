@class NSPersistentContainer, NSManagedObjectContext, NSDateFormatter;

@interface AnalyticsStoreFileWriter : NSObject {
    NSDateFormatter *_dateFormatter;
}

@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSManagedObjectContext *backgroundFileWritingMOC;

+ (id)analyticsStoreFileWriterDirectory;
+ (id)exportEntityToCSV:(id)a0 batchSize:(unsigned long long)a1 maxAge:(unsigned long long)a2 toURL:(id)a3 fileDate:(id)a4 dateFormatter:(id)a5 inManagedObjectContext:(id)a6;
+ (BOOL)writeData:(id)a0 toFile:(id)a1;
+ (id)writeObj:(id)a0 toJSONFile:(id)a1;

- (void).cxx_destruct;
- (void)initDateFormatter;
- (id)moc;
- (void)releaseBackgroundFileWritingMOC;
- (id)mom;
- (id)analyticsStoreFileWriterFilePath;
- (id)batchedWriteAnalyticsStoreToCSVFilesWithBatchSize:(unsigned long long)a0 maxAge:(unsigned long long)a1;
- (id)batchedWriteAnalyticsStoreToFile:(unsigned long long)a0 maxAge:(unsigned long long)a1;
- (id)batchedWriteAnalyticsStoreToFileWithBatchSize:(unsigned long long)a0 maxAge:(unsigned long long)a1;
- (id)initWithPersistentContainer:(id)a0;
- (id)relationshipKeyPathsForPrefetching:(id)a0;
- (void)stringifyManagedObjectsArray:(id)a0 titleString:(id *)a1 dataStringsArray:(id *)a2;
- (id)stringifyObjectWithPadding:(id)a0 padding:(id)a1 padToLength:(unsigned long long)a2;
- (id)stringifyRelationship:(id)a0 name:(id *)a1;
- (id)stringifyValueArray:(id)a0;
- (id)writeAnalyticsStoreToFile;
- (id)writeArrayToJSONFile:(id)a0;
- (id)writeDeploymentGraphToFile;
- (id)writeDictionaryToJSONFile:(id)a0 network:(id)a1;

@end
