@class WBSPrivacyProxyAvailabilityManager, NSSet, WBSSiteMetadataManager, NSMutableDictionary, NSColor, NSMutableArray, NSObject, WBSCache;
@protocol OS_dispatch_queue;

@interface _ASPasswordManagerIconController : NSObject {
    BOOL _hasLoadedHistory;
    BOOL _canEnableIconDownload;
    NSObject<OS_dispatch_queue> *_iconFetchingQueue;
    WBSSiteMetadataManager *_siteMetadataManager;
    NSSet *_domainsEligibleForIconFetching;
    NSMutableArray *_blocksAwaitingHistoryItems;
    NSMutableDictionary *_activeRequestIDToRequestToken;
    WBSCache *_iconCache;
    WBSCache *_monogramCache;
    WBSPrivacyProxyAvailabilityManager *_availabilityManager;
    NSMutableArray *_blocksAwaitingAvailabilityManager;
}

@property (class, readonly, nonatomic) NSColor *defaultMonogramBackgroundColor;

- (id)init;
- (void).cxx_destruct;
- (void)cancelRequest:(id)a0;
- (void)_fetchHistory;
- (void)_fetchIconInHistoryWithBlock:(id /* block */)a0;
- (void)_fetchIconWithName:(id)a0 highLevelDomain:(id)a1 iconSize:(struct CGSize { double x0; double x1; })a2 shouldUseOneTimeRequest:(BOOL)a3 requestID:(id)a4 responseHandler:(id /* block */)a5;
- (unsigned long long)_optionsWithHighLevelDomain:(id)a0;
- (void)_privacyProxyStateInitialized;
- (void)_requestIconWithName:(id)a0 highLevelDomain:(id)a1 iconSize:(struct CGSize { double x0; double x1; })a2 options:(unsigned long long)a3 shouldUseOneTimeRequest:(BOOL)a4 requestID:(id)a5 responseHandler:(id /* block */)a6;
- (BOOL)_shouldTryFetchingIconWithHistoryForTouchIconResponse:(id)a0 withOptions:(unsigned long long)a1;
- (id)cachedIconForHighLevelDomain:(id)a0;
- (void)fetchIconWithOneTimeRequestWithName:(id)a0 highLevelDomain:(id)a1 iconSize:(struct CGSize { double x0; double x1; })a2 responseHandler:(id /* block */)a3;
- (void)fetchIconWithOngoingRequestWithName:(id)a0 highLevelDomain:(id)a1 iconSize:(struct CGSize { double x0; double x1; })a2 requestID:(id)a3 responseHandler:(id /* block */)a4;
- (BOOL)historyShouldScheduleMaintenance:(id)a0;
- (id)monogramForTitle:(id)a0 highLevelDomain:(id)a1;

@end
