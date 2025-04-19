@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface ClearBrowsingDataController : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly) NSArray *availableClearingIntervals;

+ (id)allTimeInterval;

- (id)init;
- (void).cxx_destruct;
- (void)clearWithInterval:(id)a0 options:(unsigned long long)a1 profileIdentifiers:(id)a2 completionHandler:(id /* block */)a3;
- (void)_clearOCSPCache;
- (void)_clearBackForwardListForAllTabsFromProfilesWithIdentifiers:(id)a0;
- (void)_clearDataAddedAfterDate:(id)a0 options:(unsigned long long)a1 profileIdentifiers:(id)a2 completionHandler:(id /* block */)a3;
- (void)_clearDataWithOptions:(unsigned long long)a0 profileIdentifiers:(id)a1 completionHandler:(id /* block */)a2;
- (void)_clearNonContaineredLibraryCachesAfter:(id)a0;
- (void)_clearNonProfileBrowsingDataAfterDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)_clearNonTemporalDataIncludingFavicons:(BOOL)a0 options:(unsigned long long)a1 profileIdentifiers:(id)a2;
- (void)_clearOnlySafariHistoryAfterDate:(id)a0 profileIdentifiers:(id)a1 completionHandler:(id /* block */)a2;
- (void)_clearWebAppVisitedLinks;
- (void)_deleteAllUserDefinedContentBlockerAndReload;
- (void)_deleteUnusedSafariDesktopPictureFiles;

@end
