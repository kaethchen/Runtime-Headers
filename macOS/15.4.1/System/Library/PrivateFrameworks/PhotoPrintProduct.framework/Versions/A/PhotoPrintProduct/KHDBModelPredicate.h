@class KHDBValueSelector, KHDBFieldDef;

@interface KHDBModelPredicate : NSObject <NSCopying> {
    KHDBValueSelector *_valueSelector;
}

@property (nonatomic) int predicateType;
@property (nonatomic) int bindType;
@property (retain, nonatomic) KHDBFieldDef *fieldDef;
@property (nonatomic) long long argIndex;
@property (retain, nonatomic) id bindValue;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)descriptionWithIndent:(long long)a0;
- (id)fieldName;
- (id)sql;
- (id)initWithFieldDef:(id)a0 predicateType:(int)a1;
- (void)appendArguments:(id)a0 toArgs:(id)a1;
- (id)bindingForArguments:(id)a0;
- (BOOL)canUseRidIndex;
- (id)idListForArgs:(id)a0 limitedToIds:(id)a1;
- (id)initWithFieldDef:(id)a0;
- (id)initWithFieldDef:(id)a0 predicateType:(int)a1 argIndex:(long long)a2;
- (id)initWithFieldDef:(id)a0 predicateType:(int)a1 bindValue:(id)a2;
- (BOOL)model:(id)a0 passesFilterWithArguments:(id)a1;

@end
