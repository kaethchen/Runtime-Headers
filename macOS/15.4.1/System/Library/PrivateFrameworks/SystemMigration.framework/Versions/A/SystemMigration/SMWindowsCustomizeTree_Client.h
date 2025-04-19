@class NSMutableDictionary, NSString, NSArray, SMCustomizeTreeNode_Client, NSMutableArray;

@interface SMWindowsCustomizeTree_Client : SMCustomizeTree_Client

@property (retain) SMCustomizeTreeNode_Client *users;
@property (retain) SMCustomizeTreeNode_Client *systemLevelComponents;
@property (retain) SMCustomizeTreeNode_Client *customPaths;
@property (retain) NSMutableDictionary *customPathsUserToUserSize;
@property (retain) NSMutableDictionary *customPathsUserToUserSizeFinal;
@property (retain) NSMutableDictionary *customPathsUserToSystemSize;
@property (retain) NSMutableDictionary *customPathsUserToSystemSizeFinal;
@property unsigned long long customPathsSystemToSystemSize;
@property BOOL customPathsSystemToSystemSizeFinal;
@property unsigned long long customPathsSystemToUserSize;
@property BOOL customPathsSystemToUserSizeFinal;
@property (retain) NSMutableArray *userCustomPaths;
@property (retain) SMCustomizeTreeNode_Client *settings;
@property (retain) SMCustomizeTreeNode_Client *network;
@property (retain) SMCustomizeTreeNode_Client *machine;
@property (retain) NSString *migratableStateDescription;
@property (retain) NSMutableArray *otherDiskNodes;
@property (retain) NSArray *transferredUsers;
@property BOOL someUserNeedsToLogin;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)tearDown;
- (BOOL)rebootRequired;
- (Class)requestClass;
- (BOOL)showCustomPaths;
- (void)addDisk:(id)a0 toNode:(id)a1;
- (void)addOtherDiskComponentToTransfer:(id)a0 toRequest:(id)a1 forDiskNamed:(id)a2;
- (void)addSubComponent:(id)a0 toNode:(id)a1 select:(BOOL)a2;
- (void)addSystemComponentToTransfer:(id)a0 toRequest:(id)a1;
- (void)addUser:(id)a0 isAlreadyTransferred:(BOOL)a1;
- (void)addUserToTransfer:(id)a0 toRequest:(id)a1 withSelectedComponents:(id)a2;
- (void)addUsers:(id)a0;
- (id)appropriateUserNode;
- (void)beginAsynchronousSizing;
- (void)generateTree;
- (id)initWithTransferredUsers:(id)a0 sourceSystem:(id)a1 targetSystem:(id)a2;
- (id)migrationRequest;
- (void)preliminarySize:(unsigned long long)a0 forComponent:(id)a1;
- (void)preliminarySizeForCustomPaths:(unsigned long long)a0 type:(unsigned long long)a1 user:(id)a2;
- (void)recursivelyAddSelectedComponentsFromNode:(id)a0 toArray:(id)a1;
- (void)recursivelyFindAndUpdateSize:(id)a0 forComponentWithIdentifier:(id)a1 fromNode:(id)a2 sizeIsFinal:(BOOL)a3;
- (void)sizeDeferredComponents;
- (void)sizeDeferredComponentsForNode:(id)a0;
- (void)sizingCompletedForComponent:(id)a0 withSize:(unsigned long long)a1;
- (void)sizingCompletedForCustomPathType:(unsigned long long)a0 user:(id)a1 withSize:(unsigned long long)a2;
- (void)updateSize:(id)a0 forComponentWithIdentifier:(id)a1 sizeIsFinal:(BOOL)a2;
- (void)updateSytemCustomPathsSize;
- (void)updateUserCustomPathsSize;

@end
