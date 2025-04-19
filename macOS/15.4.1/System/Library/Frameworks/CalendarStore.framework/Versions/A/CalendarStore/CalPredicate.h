@class NSPredicate;

@interface CalPredicate : NSCompoundPredicate {
    NSPredicate *_subpredicate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)predicate;
- (id)initWithPredicate:(id)a0;
- (void)setSubpredicate:(id)a0;
- (id)subpredicate;

@end
