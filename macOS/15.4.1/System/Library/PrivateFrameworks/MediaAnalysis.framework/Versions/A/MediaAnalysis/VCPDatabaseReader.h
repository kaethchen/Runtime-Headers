@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VCPDatabaseReader : NSObject {
    NSObject<OS_dispatch_queue> *_sqlSerialQueue;
    NSString *_filepath;
    struct sqlite3 { } *_database;
}

+ (id)databaseWithURL:(id)a0;
+ (id)databaseForPhotoLibrary:(id)a0;
+ (id)databaseForPhotoLibraryURL:(id)a0;
+ (BOOL)shouldQueryInternalFields;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)valueForKey:(id)a0;
- (void)closeDatabase;
- (id)initWithDatabaseURL:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (BOOL)exists;
- (id)initWithPhotoLibraryURL:(id)a0;
- (id)databaseDirectoryPath;
- (int)openDatabase;
- (unsigned long long)countForTaskID:(unsigned long long)a0 minimumAttempts:(unsigned long long)a1;
- (int)_queryValue:(long long *)a0 forKey:(id)a1;
- (id)blacklistedLocalIdentifiersFromAssets:(id)a0;
- (unsigned long long)countForTaskID:(unsigned long long)a0 withProcessingStatus:(unsigned long long)a1;
- (int)executeDatabaseBlock:(id /* block */)a0;
- (BOOL)isAssetBlacklisted:(id)a0 blacklistDate:(id *)a1;
- (id)loadKeyValues;
- (int)parseHeader:(struct sqlite3_stmt { } *)a0 startColumn:(int)a1 analysis:(id)a2;
- (int)parseResults:(struct sqlite3_stmt { } *)a0 typeColumn:(int)a1 dataColumn:(int)a2 results:(id)a3;
- (id)queryAnalysesForAssets:(id)a0 withTypes:(id)a1;
- (id)queryAnalysisForAsset:(id)a0;
- (id)queryAnalysisForAsset:(id)a0 withTypes:(id)a1;
- (id)queryAnalysisPropertiesForAsset:(id)a0;
- (id)queryAnalysisPropertiesForAssets:(id)a0;
- (id)queryAssetsAnalyzedSince:(id)a0;
- (id)queryBlacklistedLocalIdentifiers;
- (id)queryFailedProcessingStatusFromAssets:(id)a0 forTaskID:(unsigned long long)a1;
- (int)queryHeaderForAsset:(id)a0 analysis:(id *)a1 assetId:(long long *)a2;
- (int)queryHeadersForAssets:(id)a0 analyses:(id)a1 idMap:(id)a2;
- (id)queryLocalIdentifiersForTaskID:(unsigned long long)a0 withStatus:(unsigned long long)a1;
- (int)queryProgressHistoryRecords:(id *)a0 sinceDate:(id)a1;
- (int)queryResultsForAssetId:(long long)a0 analysis:(id)a1;
- (int)queryResultsForAssetId:(long long)a0 withTypes:(id)a1 analysis:(id)a2;
- (int)queryResultsForAssets:(id)a0 withTypes:(id)a1 batchResults:(id)a2;
- (int)querySchedulingHistoryRecords:(id *)a0 forActivityID:(unsigned long long)a1 startDate:(id)a2 endDate:(id)a3;
- (int)querySchedulingHistoryRecords:(id *)a0 startDate:(id)a1 endDate:(id)a2;

@end
