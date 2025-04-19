@interface _HDMaintenanceWorkCoordinatorAsynchronousOperation : HDMaintenanceOperation {
    id /* block */ _operationBlock;
    id /* block */ _canceledBlock;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (id)initWithName:(id)a0 operationBlock:(id /* block */)a1;
- (id)initWithName:(id)a0 operationBlock:(id /* block */)a1 canceledBlock:(id /* block */)a2;

@end
