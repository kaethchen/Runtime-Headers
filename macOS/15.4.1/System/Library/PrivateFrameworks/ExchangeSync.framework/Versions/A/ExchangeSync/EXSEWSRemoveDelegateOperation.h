@class ESEGrantedDelegate;

@interface EXSEWSRemoveDelegateOperation : EXSEWSOperation

@property (retain, nonatomic) ESEGrantedDelegate *grantedDelegate;

+ (id)log;

- (void).cxx_destruct;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
