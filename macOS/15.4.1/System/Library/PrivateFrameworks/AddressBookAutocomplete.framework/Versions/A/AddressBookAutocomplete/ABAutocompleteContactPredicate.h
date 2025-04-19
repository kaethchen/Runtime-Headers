@class NSPredicate;

@interface ABAutocompleteContactPredicate : ABCNPredicate {
    NSPredicate *_abcn_coreDataPredicate;
}

+ (id)predicateForProperties:(id)a0 term:(id)a1;

- (void).cxx_destruct;
- (id)cn_coreDataPredicate;
- (id)initWithPredicate:(id)a0 coreDataPredicate:(id)a1;

@end
