@class NSString;

@interface HistoryItem : WBSHistoryItem {
    NSString *_titleTruncatedForMenu;
}

@property (readonly, nonatomic) NSString *titleTruncatedForMenu;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)_lastVisitTitleMayHaveChanged;
- (void)_wasVisitedOnSynchronizationQueue:(id)a0;
- (id)createDebugMenu;

@end
