@class NSString, NSMutableDictionary, NSFileHandle, NSMutableArray;
@protocol EFAssertableScheduler;

@interface EDSQLQueryLogger : NSObject <EFSQLQueryLogging>

@property (readonly, nonatomic) id<EFAssertableScheduler> queryLoggingScheduler;
@property (retain, nonatomic) NSString *queryLogDirectoryPath;
@property (retain, nonatomic) NSString *queryLogFilePath;
@property (retain, nonatomic) NSString *queryCountLogFilePath;
@property (retain, nonatomic) NSFileHandle *rawQueryLogInputFileHandle;
@property (retain, nonatomic) NSMutableDictionary *queryCountDict;
@property (retain, nonatomic) NSMutableArray *queryStatisticsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)logQueryString:(id)a0 label:(id)a1 firstRowExecutionTimeInNanoseconds:(unsigned long long)a2 totalExecutionTimeInNanoseconds:(unsigned long long)a3 numberOfRows:(unsigned long long)a4;
- (id)_bucketTransactionLabels:(id)a0;
- (BOOL)_createFileIfNeeded:(id)a0;
- (void)_createQueryCountDict:(id)a0;
- (id)_createQueryCountLogFilePath;
- (id)_createQueryLogDirectoryPath;
- (id)_createQueryLogFilePath;
- (id)_createQueryStatisticsDictionary:(id)a0 queryCountByTransactionLabel:(id)a1 queryCountNum:(unsigned long long)a2 firstRowExecutionTimeStats:(id)a3 totalExecutionTimeStats:(id)a4 timePerRowExecutionTimeStats:(id)a5;
- (void)_preprocessQueryInfo;
- (void)_recreateFile:(id)a0;
- (void)_removeFile:(id)a0;
- (id)_sortQueryCountDict;
- (void)_writeQueryStatistics:(id)a0;
- (void)submitQueryLogData;

@end
