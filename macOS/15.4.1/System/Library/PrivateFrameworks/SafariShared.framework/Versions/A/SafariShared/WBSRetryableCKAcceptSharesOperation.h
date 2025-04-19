@class NSArray;

@interface WBSRetryableCKAcceptSharesOperation : WBSRetryableCKOperation

@property (copy, nonatomic) NSArray *shareMetadatas;
@property (copy, nonatomic) id /* block */ perShareCompletionBlock;
@property (copy, nonatomic) id /* block */ acceptSharesCompletionBlock;

- (void).cxx_destruct;
- (id)_makeOperation;
- (void)_setUpOperation:(id)a0;

@end
