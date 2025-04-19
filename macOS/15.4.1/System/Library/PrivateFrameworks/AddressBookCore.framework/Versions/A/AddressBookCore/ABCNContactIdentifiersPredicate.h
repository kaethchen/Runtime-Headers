@class NSArray;

@interface ABCNContactIdentifiersPredicate : ABCNPredicate

@property (readonly, copy, nonatomic) NSArray *identifiers;

- (void)dealloc;
- (id)cn_coreDataPredicate;
- (id)initWithIdentifies:(id)a0;

@end
