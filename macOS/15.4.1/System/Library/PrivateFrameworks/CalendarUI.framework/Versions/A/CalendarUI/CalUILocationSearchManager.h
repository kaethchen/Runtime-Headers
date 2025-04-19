@class NSMutableSet;
@protocol CalUILocationSearchManagerDelegate;

@interface CalUILocationSearchManager : NSObject

@property (weak) id<CalUILocationSearchManagerDelegate> delegate;
@property (retain) NSMutableSet *pendingRequests;
@property BOOL resultsDisplayed;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)startProgressIndicator;
- (void)stopProgressIndicator;
- (void)cancelAllPendingRequests;
- (void)displaySearchResults;
- (BOOL)isCalDAVsearchPending;
- (BOOL)isLocalSearchPending;
- (BOOL)isRequestPendingForKey:(id)a0;
- (void)registerPendingRequestWithKey:(id)a0;
- (BOOL)shouldDisplayResults;
- (BOOL)shouldRequestKeyDisplayResultsWhenCompleted:(id)a0;
- (void)startProgressIndicatorWithFailSafe;
- (void)unregisterAllPendingRequests;
- (void)unregisterPendingRequestWithKey:(id)a0;

@end
