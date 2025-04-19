@class NSString, ASTRemoteServerSession, ASTContext, NSObject, ASTRepairSession, NSMutableSet, NSMutableArray;
@protocol OS_dispatch_group, ASTSessionDelegate;

@interface ASTSession : NSObject <ASTSessionSigningDelegate>

@property (retain, nonatomic) ASTRemoteServerSession *serverSession;
@property (retain, nonatomic) ASTRepairSession *repairSession;
@property (retain, nonatomic) NSMutableArray *destinations;
@property (retain, nonatomic) NSMutableSet *startedSessions;
@property (retain, nonatomic) ASTSession *activeSession;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *sessionStartDispatchGroup;
@property (weak) id<ASTSessionDelegate> delegate;
@property unsigned long long allowCellularSizeThreshold;
@property (readonly, copy) ASTContext *context;
@property (readonly, nonatomic) long long sessionEndReason;
@property (readonly, nonatomic) BOOL shouldShowResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestAsset:(id)a0 completionHandler:(id /* block */)a1;
+ (void)requestAsset:(id)a0 serverURL:(id)a1 endpoint:(id)a2 completionHandler:(id /* block */)a3;
+ (void)sessionExistsForIdentities:(id)a0 ticketNumber:(id)a1 completion:(id /* block */)a2;
+ (void)sessionExistsForIdentities:(id)a0 ticketNumber:(id)a1 completionHandler:(id /* block */)a2;
+ (void)sessionExistsForIdentities:(id)a0 ticketNumber:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;
+ (void)sessionExistsForIdentities:(id)a0 ticketNumber:(id)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;
+ (void)sessionExistsForSerialNumbers:(id)a0 ticketNumber:(id)a1 completionHandler:(id /* block */)a2;
+ (void)sessionExistsForSerialNumbers:(id)a0 ticketNumber:(id)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;
+ (void)sessionStatusForIdentities:(id)a0 ticketNumber:(id)a1 completionHandler:(id /* block */)a2;
+ (void)sessionStatusForIdentities:(id)a0 ticketNumber:(id)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;
+ (void)sessionStatusForIdentities:(id)a0 ticketNumber:(id)a1 timeout:(double)a2 requestQueuedSuiteInfo:(BOOL)a3 completionHandler:(id /* block */)a4;
+ (id)sessionWithContext:(id)a0;
+ (id)sessionWithIdentity:(id)a0;
+ (id)sessionWithSerialNumber:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithContext:(id)a0;
- (void)start;
- (void)end;
- (id)initWithIdentity:(id)a0;
- (void)idle;
- (void)archive;
- (void)sessionDidStart:(id)a0;
- (void)session:(id)a0 didEndWithError:(id)a1;
- (void)requestAsset:(id)a0 completionHandler:(id /* block */)a1;
- (id)readContentsOfFileHandle:(id)a0 error:(id *)a1;
- (id)destinationAssetDirectory;
- (id)destinationURLForAsset:(id)a0;
- (void)fetchAsset:(id)a0 sessionClass:(Class)a1 serverURL:(id)a2 endpoint:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithSerialNumber:(id)a0;
- (void)removeDownloadedAssets;
- (void)requestAsset:(id)a0 serverURL:(id)a1 endpoint:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestSuiteStart:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestSuiteSummary:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestSuitesAvailableWithCompletionHandler:(id /* block */)a0;
- (BOOL)sendAuthInfoResult:(id)a0 error:(id *)a1;
- (BOOL)sendProfileResult:(id)a0 error:(id *)a1;
- (BOOL)sendTestResult:(id)a0 error:(id *)a1;
- (void)session:(id)a0 cancelTest:(id)a1;
- (void)session:(id)a0 didPauseWithError:(id)a1;
- (void)session:(id)a0 generateAuthInfoWithNonce:(id)a1;
- (void)session:(id)a0 profile:(id)a1 filteredByComponents:(id)a2;
- (void)session:(id)a0 signFile:(id)a1 completionHandler:(id /* block */)a2;
- (void)session:(id)a0 signPayload:(id)a1 completionHandler:(id /* block */)a2;
- (void)session:(id)a0 startTest:(id)a1 parameters:(id)a2 testResult:(id)a3;
- (void)sessionDidResume:(id)a0;
- (BOOL)shouldEvictCachedAssetForName:(id)a0;
- (void)startWithMode:(int)a0;
- (void)updateAction:(id)a0;

@end
