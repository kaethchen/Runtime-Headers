@interface ProactiveSummarization.SummarizationPipelineDatabase : NSObject <_PASDatabaseMigrationProtocol> {
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ database;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)databaseHandle;
- (id)migrations;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;

@end
