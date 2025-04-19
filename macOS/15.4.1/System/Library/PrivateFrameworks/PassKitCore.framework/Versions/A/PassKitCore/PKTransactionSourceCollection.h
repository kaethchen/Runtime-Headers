@class NSSet;

@interface PKTransactionSourceCollection : NSObject

@property (readonly, copy, nonatomic) NSSet *transactionSources;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)account;
- (id)initWithTransactionSource:(id)a0;
- (id)initWithTransactionSources:(id)a0;
- (id)paymentPass;
- (id)transactionSourceForTransactionSourceIdentifier:(id)a0;
- (id)transactionSourceIdentifiers;
- (id)transactionSourcesForType:(unsigned long long)a0;

@end
