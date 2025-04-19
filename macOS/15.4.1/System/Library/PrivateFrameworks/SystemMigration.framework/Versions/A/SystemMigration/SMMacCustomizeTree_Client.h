@class NSString, NSNumber, SMCustomizeTreeNode_Client;

@interface SMMacCustomizeTree_Client : SMCustomizeTree_Client

@property BOOL overallConflict;
@property (retain) SMCustomizeTreeNode_Client *settings;
@property (retain) SMCustomizeTreeNode_Client *network;
@property (retain) SMCustomizeTreeNode_Client *machine;
@property (retain) SMCustomizeTreeNode_Client *applications;
@property (retain) SMCustomizeTreeNode_Client *printers;
@property (retain) SMCustomizeTreeNode_Client *library;
@property (retain) SMCustomizeTreeNode_Client *volumes;
@property (retain) SMCustomizeTreeNode_Client *fsRoot;
@property (retain) SMCustomizeTreeNode_Client *serverData;
@property (retain) SMCustomizeTreeNode_Client *documentsAndData;
@property (retain) NSString *migratableStateDescription;
@property unsigned long long applicationFilesProcessed;
@property unsigned long long otherFilesProcessed;
@property unsigned long long systemSettingsFilesProcessed;
@property unsigned long long printerFilesProcessed;
@property unsigned long long serverFilesProcessed;
@property unsigned long long noGroupFilesProcessed;
@property (copy) NSNumber *filesProcessed;
@property BOOL simpleModeTree;

+ (id)keyPathsForValuesAffectingConflictExists;
+ (id)keyPathsForValuesAffectingMigratableState;
+ (id)keyPathsForValuesAffectingRebootRequired;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)tearDown;
- (BOOL)rebootRequired;
- (Class)requestClass;
- (id)addUser:(id)a0;
- (void)spawnOffspring:(id)a0 forNode:(id)a1 andUser:(id)a2;
- (BOOL)migratableState;
- (void)addUsers:(id)a0;
- (id)appropriateUserNode;
- (void)beginAsynchronousSizing;
- (BOOL)conflictExists;
- (void)generateTree;
- (id)getImageForUserOffSpring:(id)a0;
- (id)migrationRequest;
- (void)preliminarySize:(unsigned long long)a0 andCount:(unsigned long long)a1 forPathGroup:(unsigned long long)a2;
- (void)preliminarySize:(unsigned long long)a0 forComponent:(id)a1;
- (void)preliminarySize:(unsigned long long)a0 forUserWithUUID:(id)a1;
- (void)preliminarySizeForCustomPaths:(unsigned long long)a0 type:(unsigned long long)a1 user:(id)a2;
- (void)setSize:(unsigned long long)a0 andCount:(unsigned long long)a1 forPathGroup:(unsigned long long)a2 sizeIsFinal:(BOOL)a3;
- (void)sizingCompletedForComponent:(id)a0 withSize:(unsigned long long)a1;
- (void)sizingCompletedForCustomPathType:(unsigned long long)a0 user:(id)a1 withSize:(unsigned long long)a2;
- (void)sizingCompletedForPathGroup:(unsigned long long)a0 withSize:(unsigned long long)a1;
- (void)sizingCompletedForUserWithUUID:(id)a0 excludablePaths:(id)a1;
- (id)treeNodeWithUser:(id)a0;
- (void)updateAllUserConflicts;
- (BOOL)updateUser:(id)a0 withID:(id)a1 andExcludablePaths:(id)a2;

@end
