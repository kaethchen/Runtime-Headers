@class NSArray, _NSPredicateEditorTree, NSMutableArray;

@interface _NSPredicateEditorRowNode : NSObject

@property (readonly) _NSPredicateEditorTree *tree;
@property (retain, nonatomic) NSMutableArray *copiedTemplateContainer;
@property (retain, nonatomic) NSMutableArray *templateViews;
@property (copy, nonatomic) NSArray *children;

+ (id)_rowNodeFromTree:(id)a0 withTemplateTable:(id)a1;
+ (id)rowNodeFromTree:(id)a0;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)title;
- (BOOL)applyTemplate:(id)a0 withViews:(id)a1 forOriginalTemplate:(id)a2;
- (void)copyTemplateIfNecessary;
- (id)displayValue;
- (id)templateForRow;
- (id)templateView;

@end
