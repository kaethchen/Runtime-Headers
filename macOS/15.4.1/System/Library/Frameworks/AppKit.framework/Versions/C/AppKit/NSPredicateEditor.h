@class NSArray;

@interface NSPredicateEditor : NSRuleEditor {
    NSArray *_rootTrees;
    id _allTemplates;
    NSArray *_rootHeaderTrees;
    id _predicateTarget;
    SEL _predicateAction;
    struct { unsigned char suppressAction : 4; unsigned int reserved : 28; } _peFlags;
}

@property (copy) NSArray *rowTemplates;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTarget:(id)a0;
- (id)target;
- (id)predicate;
- (void)setAction:(SEL)a0;
- (void)setObjectValue:(id)a0;
- (id)objectValue;
- (SEL)action;
- (id)_queryChild:(long long)a0 ofItem:(id)a1 withRowType:(long long)a2;
- (void)_templateControlValueDidChange:(id)a0;
- (void)validateEditing;
- (void)_sendRuleAction;
- (void)_updateItemsByCompoundTemplates;
- (void)_changedItem:(id)a0 toItem:(id)a1 inRow:(long long)a2;
- (unsigned long long)_compoundPredicateTypeForRootRows;
- (id)_constructTreeForTemplate:(id)a0;
- (id)_constructTreesForTemplates:(id)a0;
- (BOOL)_forceUseDelegate;
- (void)_initRuleEditorShared;
- (id)_mergeTree:(id)a0;
- (id)_predicateFromRowItem:(id)a0;
- (long long)_queryNumberOfChildrenOfItem:(id)a0 withRowType:(unsigned long long)a1;
- (id)_queryValueForItem:(id)a0 inRow:(long long)a1;
- (void)_reflectPredicate:(id)a0;
- (id)_rowFromTemplate:(id)a0 originalTemplate:(id)a1 withRowType:(unsigned long long)a2;
- (id)_rowObjectFromPredicate:(id)a0;
- (BOOL)_sendsActionOnIncompleteTextChanges;
- (void)_setDefaultTargetAndActionOnView:(id)a0;
- (void)_updateItemsBySimpleTemplates;
- (void)_updatePredicate;
- (void)_updatePredicateFromRows;
- (BOOL)_wantsMinimalArchival;
- (void)controlTextDidBeginEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)reloadCriteria;

@end
