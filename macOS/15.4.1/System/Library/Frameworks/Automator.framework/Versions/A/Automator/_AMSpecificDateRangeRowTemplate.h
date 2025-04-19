@class NSString, NSPopUpButton;

@interface _AMSpecificDateRangeRowTemplate : NSPredicateEditorRowTemplate

@property (retain) NSPopUpButton *leftExpressionPopup;
@property (retain) NSPopUpButton *specificDateRangePopup;
@property BOOL hasCreatedViews;
@property (copy) NSString *name;
@property (copy) NSString *keyPath;

+ (id)templateWithName:(id)a0 withKeyPath:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setPredicate:(id)a0;
- (id)displayableSubpredicatesOfPredicate:(id)a0;
- (double)matchForPredicate:(id)a0;
- (id)predicateWithSubpredicates:(id)a0;
- (id)templateViews;
- (id)convertToEvaluationPredicateFromUIPredicate:(id)a0;
- (void)createViewsIfNecessary;
- (id)initWithName:(id)a0 withKeyPath:(id)a1;

@end
