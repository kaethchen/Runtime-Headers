@class NSString, NSArray, NSPredicate, NSPopUpButton, _AMPredicateEditor;

@interface _AMPredicateEditorAction : AMBundleAction

@property (weak) _AMPredicateEditor *_predicateEditor;
@property (weak) NSPopUpButton *_itemTypePopUpButton;
@property (copy, nonatomic) NSString *itemType;
@property (retain, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) NSArray *perItemTypeInfo;
@property (retain) NSArray *_perItemTypeInfo;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)updateParameters;
- (BOOL)validatePredicate:(id)a0;
- (void)itemTypePopUpButtonSelectionChanged:(id)a0;
- (void)opened;
- (void)parametersUpdated;
- (void)predicateEditorChanged:(id)a0;
- (void)setUpUIForItemType:(id)a0 withPredicate:(id)a1;

@end
