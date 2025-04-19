@class NSArray, NSPopUpButton;

@interface AMRelativeDateRowTemplate : NSPredicateEditorRowTemplate

@property (retain) NSPopUpButton *datePopUpButton;
@property BOOL hasCreatedViews;
@property (readonly) NSArray *matchingLeftExpressions;

- (void).cxx_destruct;
- (void)setPredicate:(id)a0;
- (double)matchForPredicate:(id)a0;
- (id)predicateWithSubpredicates:(id)a0;
- (id)templateViews;
- (void)createViewsIfNecessary;

@end
