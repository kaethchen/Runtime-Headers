@class NSFetchedResultsController, STCoreUser, NSArray, NSString, STAskForTimeClient, NSMutableArray;

@interface STRequestsController : NSObject <NSFetchedResultsControllerDelegate>

@property (retain) NSMutableArray *mutablePendingRequests;
@property (retain) NSFetchedResultsController *requestFetchedResultsController;
@property (readonly) STAskForTimeClient *client;
@property (retain, nonatomic) STCoreUser *user;
@property (readonly, copy) NSArray *pendingRequests;
@property (readonly) BOOL hasPendingContactManagementRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingHasPendingContactManagementRequest;

- (id)init;
- (void).cxx_destruct;
- (void)controller:(id)a0 didChangeObject:(id)a1 atIndexPath:(id)a2 forChangeType:(unsigned long long)a3 newIndexPath:(id)a4;
- (id)objectInPendingRequestsAtIndex:(unsigned long long)a0;
- (void)_updatePendingRequests;
- (unsigned long long)countOfPendingRequests;
- (void)insertObject:(id)a0 inPendingRequestsAtIndex:(unsigned long long)a1;
- (void)removeObjectFromPendingRequestsAtIndex:(unsigned long long)a0;
- (void)replaceObjectInPendingRequestsAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)respondToContactManagementRequestByApproving:(BOOL)a0;
- (void)respondToRequest:(id)a0 approved:(BOOL)a1 amountGranted:(id)a2;

@end
