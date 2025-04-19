@class NSTextField, NSString, NSPopUpButton;

@interface _AMFileSizeRowTemplate : NSPredicateEditorRowTemplate

@property (retain) NSPopUpButton *leftExpressionPopup;
@property (retain) NSPopUpButton *comparisonPopUpButton;
@property (retain) NSTextField *valueTextField;
@property (retain) NSPopUpButton *unitPopUpButton;
@property (copy) NSString *name;
@property (retain) NSString *keyPath;
@property BOOL hasCreatedViews;

+ (id)templateWithName:(id)a0 withKeyPath:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setPredicate:(id)a0;
- (double)matchForPredicate:(id)a0;
- (id)predicateWithSubpredicates:(id)a0;
- (id)templateViews;
- (id)convertToEvaluationPredicateFromUIPredicate:(id)a0;
- (void)createViewsIfNecessary;
- (id)initWithName:(id)a0 withKeyPath:(id)a1;

@end
