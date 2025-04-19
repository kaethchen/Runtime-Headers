@class HDDatabase, HDAssertion, HDDaemonTransaction;

@interface _HDMaintenanceWorkCoordinatorProtectedDatabaseOperation : HDMaintenanceOperation {
    HDDatabase *_database;
    HDAssertion *_accessibilityAssertion;
    HDDaemonTransaction *_transaction;
    id /* block */ _operationBlock;
    id /* block */ _canceledBlock;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (id)initWithName:(id)a0 database:(id)a1 operationBlock:(id /* block */)a2;
- (id)initWithName:(id)a0 database:(id)a1 operationBlock:(id /* block */)a2 canceledBlock:(id /* block */)a3;

@end
