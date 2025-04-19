@class NSString;

@interface SPFileRadarSupport : NSObject {
    NSString *_logForTTR;
    NSString *_fvFilePath;
}

+ (id)getSharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)clearExistingFiles;
- (void)dumpFeatureVectorForRankingItems:(id)a0 query:(id)a1;
- (void)dumpSearchResultCategories;
- (void)dumpTTRDebugFilesForQuery:(id)a0 rankingItems:(id)a1;
- (id)getTTRURL;
- (void)saveLogForTTR:(id)a0;
- (id)searchResultCategoriesLogPath;
- (void)setFVFilePathWithQueryString:(id)a0;

@end
