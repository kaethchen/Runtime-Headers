@class SMSystem_Client, NSString, SMCustomizeTreeNode_Client, NSNumber;
@protocol SMSizingDelegate;

@interface SMCustomizeTree_Client : NSObject

@property (retain) SMCustomizeTreeNode_Client *root;
@property (readonly, weak) SMCustomizeTreeNode_Client *appropriateUserNode;
@property (readonly, copy) NSNumber *totalSize;
@property (copy) NSNumber *freeSpace;
@property (readonly, copy) NSNumber *filesProcessed;
@property BOOL disableFileVaultUsersMigration;
@property (retain) SMSystem_Client *sourceSystem;
@property (retain) SMSystem_Client *targetSystem;
@property BOOL isOneToOneMigration;
@property (readonly) BOOL migratableState;
@property (readonly) NSString *migratableStateDescription;
@property (readonly) BOOL conflictExists;
@property (readonly) BOOL rebootRequired;
@property (retain) id<SMSizingDelegate> sizingBridge;
@property unsigned long long deferredMandatoryUpdateProductSizeInBytes;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)tearDown;
- (Class)requestClass;
- (void)addUsers:(id)a0;
- (void)beginAsynchronousSizing;
- (void)generateTree;
- (id)migrationRequest;
- (void)preliminarySize:(unsigned long long)a0 andCount:(unsigned long long)a1 forPathGroup:(unsigned long long)a2;
- (void)preliminarySize:(unsigned long long)a0 forComponent:(id)a1;
- (void)preliminarySize:(unsigned long long)a0 forUserWithUUID:(id)a1;
- (void)preliminarySizeForCustomPaths:(unsigned long long)a0 type:(unsigned long long)a1 user:(id)a2;
- (void)sizingCompletedForComponent:(id)a0 withSize:(unsigned long long)a1;
- (void)sizingCompletedForCustomPathType:(unsigned long long)a0 user:(id)a1 withSize:(unsigned long long)a2;
- (void)sizingCompletedForPathGroup:(unsigned long long)a0 withSize:(unsigned long long)a1;
- (void)sizingCompletedForUserWithUUID:(id)a0 excludablePaths:(id)a1;
- (void)updateAllUserConflicts;

@end
