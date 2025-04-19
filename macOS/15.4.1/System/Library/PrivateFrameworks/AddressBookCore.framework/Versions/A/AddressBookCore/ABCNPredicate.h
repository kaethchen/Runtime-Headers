@class NSPredicate;

@interface ABCNPredicate : NSPredicate <NSCopying> {
    NSPredicate *_abcn_predicate;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)evaluateWithObject:(id)a0;
- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)initWithPredicate:(id)a0;
- (id)cn_coreDataPredicate;
- (id)cn_predicate;

@end
