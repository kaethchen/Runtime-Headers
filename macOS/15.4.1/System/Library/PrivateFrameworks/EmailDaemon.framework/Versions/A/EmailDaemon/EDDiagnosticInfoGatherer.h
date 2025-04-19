@class EDFetchController, NSString, EDPersistence, NSObject;
@protocol EDServerRemoteClientsProvider, OS_os_log, EFScheduler, EMDiagnosticInfoProvidingXPC;

@interface EDDiagnosticInfoGatherer : NSObject <EFLoggable, EMDiagnosticInfoGathererInterface>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id<EMDiagnosticInfoProvidingXPC> diagnosticInfoProvider;
@property (retain, nonatomic) id<EDServerRemoteClientsProvider> remoteClientsProvider;
@property (readonly, nonatomic) EDFetchController *fetchController;
@property (retain, nonatomic) id<EFScheduler> gathererQueue;
@property (retain, nonatomic) EDPersistence *persistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_copyFromDatabase:(struct sqlite3 { } *)a0 intoDatabase:(struct sqlite3 { } *)a1;
- (BOOL)_compressDatabaseAtURL:(id)a0 intoDirectoryURL:(id)a1;
- (BOOL)_compressDirectoryAtURL:(id)a0 intoArchiveWithURL:(id)a1;
- (BOOL)_copyDatabaseFromURL:(id)a0 intoDatabaseAtURL:(id)a1;
- (void)_copySearchIndexerDatabaseIntoDirectoryURL:(id)a0;
- (void)_createDiagnosticsJSONForMessagesWithObjectIDs:(id)a0 directoryURL:(id)a1;
- (void)_downloadMessagesWithObjectIDs:(id)a0 directoryURL:(id)a1 completionPromise:(id)a2;
- (void)databaseStatisticsWithCompletionHandler:(id /* block */)a0;
- (void)fetchControllerStatusWithCompletionHandler:(id /* block */)a0;
- (void)gatherDiagnosticsWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)gatherIndexingDiagnosticsWithCompletionHandler:(id /* block */)a0;
- (id)initWithFetchController:(id)a0 remoteClientsProvider:(id)a1 persistence:(id)a2;
- (void)registerDiagnosticInfoProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)searchableIndexDatabaseStatisticsWithCompletionHandler:(id /* block */)a0;

@end
