@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNFavoritesLogger : NSObject <CNFavoritesLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) NSObject<OS_os_log> *summaryLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_simulateCrashReportWithMessage:(id)a0;
- (void)failedToConvertFavoritesToPropertyList:(id)a0;
- (void)failedToReadFavoritesFromPath:(id)a0 error:(id)a1 simulateCrashReport:(BOOL)a2;
- (void)failedToReadRemoteFavorites:(id)a0;
- (void)failedToVerifyFavorites:(id)a0 withPropertyListFavorites:(id)a1 error:(id)a2;
- (void)failedToVerifyWrittenFavoritesExistsAtPath:(id)a0;
- (void)failedToWriteFavoritesToPath:(id)a0 error:(id)a1 simulateCrashReport:(BOOL)a2;
- (void)failedToWriteRemoteFavorites:(id)a0;
- (void)finishedReadingFavoritesFromPath:(id)a0 entriesCount:(unsigned long long)a1;
- (void)finishedReadingRemoteFavorites;
- (void)finishedWritingFavoritesToPath:(id)a0 entriesCount:(unsigned long long)a1;
- (void)finishedWritingRemoteFavorites;
- (void)readingFavorites:(id /* block */)a0;
- (void)rematchingFavorites:(id /* block */)a0;
- (void)reportFavoritesAccessedBeforeFirstUnlock;
- (void)writingFavorites:(id /* block */)a0;

@end
