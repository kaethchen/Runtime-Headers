@interface ABCNMutableSaveResponse : ABCNSaveResponse

- (void)addSuccessBlock:(id /* block */)a0;
- (void)addError:(id)a0;
- (void)addSuccesBlocks:(id)a0;
- (void)addUpdatedGroup:(id)a0;

@end
