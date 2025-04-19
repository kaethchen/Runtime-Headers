@class NSTextField, NSArray, NSNumberFormatter, NSPopUpButton, NSMenu;

@interface AMWithinLastDateRowTemplate : NSPredicateEditorRowTemplate

@property BOOL hasCreatedViews;
@property (retain) NSPopUpButton *datePopUpButton;
@property (retain) NSTextField *unitTextField;
@property (retain) NSNumberFormatter *unitTextFieldFormatter;
@property (retain) NSPopUpButton *unitPopUpButton;
@property (readonly) NSArray *matchingLeftExpressions;
@property (readonly) NSMenu *menuForUnitPopUpButton;

- (void).cxx_destruct;
- (void)setPredicate:(id)a0;
- (double)matchForPredicate:(id)a0;
- (id)predicateWithSubpredicates:(id)a0;
- (id)templateViews;
- (void)createViewsIfNecessary;

@end
