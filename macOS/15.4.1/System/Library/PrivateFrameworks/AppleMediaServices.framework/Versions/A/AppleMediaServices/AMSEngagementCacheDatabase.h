@class NSString, AMSSQLiteConnection;

@interface AMSEngagementCacheDatabase : NSObject <AMSSQLiteConnectionDelegate>

@property (retain) AMSSQLiteConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)openAtPath:(id)a0 error:(id *)a1;
- (BOOL)closeWithError:(id *)a0;
- (void)_performTransaction:(id /* block */)a0;
- (BOOL)collectGarbageWithError:(id *)a0;
- (BOOL)connection:(id)a0 needsResetForCorruptionError:(id)a1 error:(out id *)a2;
- (BOOL)insertResponseData:(id)a0 filterData:(id)a1 expiration:(id)a2 error:(id *)a3;
- (BOOL)selectWithExpirationDate:(id)a0 handler:(id /* block */)a1 error:(id *)a2;

@end
