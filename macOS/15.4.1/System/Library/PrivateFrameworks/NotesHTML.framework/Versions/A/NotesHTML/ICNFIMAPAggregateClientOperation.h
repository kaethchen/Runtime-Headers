@class NSArray;

@interface ICNFIMAPAggregateClientOperation : ICNFIMAPClientOperation

@property (readonly, copy, nonatomic) NSArray *operations;

- (id)init;
- (void).cxx_destruct;
- (long long)composition;
- (id)initWithOperations:(id)a0;
- (void)setGateway:(id)a0;
- (void)cleanupAfterCompletion;

@end
