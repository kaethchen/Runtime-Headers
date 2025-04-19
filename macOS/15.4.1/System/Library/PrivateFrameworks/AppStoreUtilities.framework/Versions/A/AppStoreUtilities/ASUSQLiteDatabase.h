@class NSString, NSHashTable, ASUSQLiteConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ASUSQLiteDatabase : NSObject <ASUSQLiteConnectionDelegate> {
    ASUSQLiteConnection *_connection;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    NSHashTable *_migratedStores;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (BOOL)tableExists:(id)a0;
- (BOOL)connectionNeedsResetForCorruption:(id)a0;
- (void)assertOnTransactionQueue;
- (BOOL)connectionNeedsResetForReopen:(id)a0;
- (id)initWithConnectionOptions:(id)a0;
- (void)modifyStore:(id)a0 usingTransaction:(id /* block */)a1;
- (void)modifyStore:(id)a0 usingTransaction:(id /* block */)a1 completion:(id /* block */)a2;
- (void)modifyStore:(id)a0 usingTransactionClass:(Class)a1 withBlock:(id /* block */)a2;
- (void)modifyStore:(id)a0 usingTransactionClass:(Class)a1 withBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)readStore:(id)a0 usingSession:(id /* block */)a1;
- (void)readStore:(id)a0 usingSession:(id /* block */)a1 completion:(id /* block */)a2;
- (void)verifyDatabaseIntegrity;

@end
