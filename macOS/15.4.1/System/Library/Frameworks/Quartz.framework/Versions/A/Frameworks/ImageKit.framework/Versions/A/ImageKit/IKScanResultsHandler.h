@class NSArray, NSTableView, NSMutableArray, NSWindow;

@interface IKScanResultsHandler : NSObject {
    NSWindow *_window;
    NSTableView *_tableView;
    NSMutableArray *_scanInfos;
}

@property BOOL hasScanResults;
@property (retain) NSArray *scanResultsTLO;

+ (void)autoShowUI;
+ (id)sharedScannerResultsHandler;

- (id)init;
- (void)clear:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)showUI;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)removeScanInfo:(id)a0;
- (id)scanInfoForURL:(id)a0;
- (void)addScanInfo:(id)a0;
- (void)doubleClick:(id)a0;
- (void)hideUI;
- (void)redisplayScanInfo:(id)a0;

@end
