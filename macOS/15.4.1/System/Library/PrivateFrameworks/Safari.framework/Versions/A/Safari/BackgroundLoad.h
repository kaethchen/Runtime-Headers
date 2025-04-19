@class NSArray, NSString, BrowserViewController, BrowserTabViewItem, NSMutableArray;

@interface BackgroundLoad : NSObject {
    NSMutableArray *_historyOperations;
    struct Array { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _currentPageBackList;
    struct BackForwardListItem { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _currentPageCurrentBackForwardListItem;
    struct Array { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _backgroundLoadPageBackList;
    BrowserViewController *_browserViewControllerUsedWhenLoadingInBackground;
}

@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *tabLabel;
@property (copy, nonatomic) NSString *httpReferrer;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *collectionIdentifier;
@property (nonatomic, getter=isTopHitPreload) BOOL topHitPreload;
@property (readonly, nonatomic, getter=isCommitted) BOOL committed;
@property (readonly, nonatomic, getter=isCommittedAndCanBeShown) BOOL committedAndCanBeShown;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) BOOL hasAnythingToDisplay;
@property (readonly, nonatomic) BOOL destinationPageIsTryingToClose;
@property (nonatomic) int tryCloseOfDestinationPageCompletionAction;
@property (readonly, nonatomic) struct BackForwardListItem { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } backgroundLoadPageCurrentBackForwardListItem;
@property (nonatomic) BOOL reissuedBecauseResultedInDownload;
@property (nonatomic, getter=isTriggeringAppSSO) BOOL triggeringAppSSO;
@property (nonatomic) BOOL canAttemptUpgradingRequestURLToHTTPS;
@property (weak, nonatomic) BrowserViewController *browserViewController;
@property (weak, nonatomic) BrowserTabViewItem *destinationTabViewItem;
@property (readonly, copy, nonatomic) NSString *publicLoggingDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)commitAllHistoryOperations;
- (void)enqueueHistoryOperation:(id)a0;
- (id)initWithURLs:(id)a0 tabLabel:(id)a1 identifier:(id)a2;
- (void)setUpSessionStateWithoutNavigationUsingBrowserViewController:(id)a0;
- (void)updateBackForwardList;

@end
