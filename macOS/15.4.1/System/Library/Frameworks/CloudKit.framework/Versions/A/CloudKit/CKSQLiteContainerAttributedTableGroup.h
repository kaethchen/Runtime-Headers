@class super_class;

@interface CKSQLiteContainerAttributedTableGroup : CKSQLiteTableGroup {
    void /* function */ *_attributionFunc;
    struct objc_super { super_class *receiver; Class x0; } _sup;
}

+ (void /* function */ *)attributionFunctionForAttributionName:(id)a0;
+ (void /* function */ *)attributionFunctionForSpecialContainerType:(long long)a0;
+ (id)attributionNameForSpecialContainerType:(long long)a0;
+ (unsigned long long)tableGroupOptionsForContainerType:(long long)a0;

- (id)init;
- (id)performTransaction:(id /* block */)a0;
- (id)finishInitializing;
- (id)performInTransaction:(id /* block */)a0;

@end
