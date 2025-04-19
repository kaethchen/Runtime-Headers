@class LNAsyncIteratorReference, NSArray;

@interface LNAsyncIteratorNextResultsOperation : LNInterfaceConnectionOperation

@property (readonly, copy, nonatomic) LNAsyncIteratorReference *iteratorReference;
@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)start;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 iterator:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

@end
