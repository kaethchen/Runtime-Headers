@interface AMSPromiseSerialQueueItem : NSObject {
    id /* block */ _runBlock;
}

- (void)run;
- (void).cxx_destruct;
- (id)initWithBinaryPromise:(id)a0 block:(id /* block */)a1 completion:(id /* block */)a2;
- (id)initWithPromise:(id)a0 block:(id /* block */)a1 completion:(id /* block */)a2;

@end
