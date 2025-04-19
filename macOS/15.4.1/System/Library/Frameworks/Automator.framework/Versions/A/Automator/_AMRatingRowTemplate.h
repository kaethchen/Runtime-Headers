@class NSString, NSLevelIndicator, NSPopUpButton;

@interface _AMRatingRowTemplate : NSPredicateEditorRowTemplate

@property (retain) NSPopUpButton *leftExpressionPopup;
@property (retain) NSPopUpButton *operatorTypePopup;
@property (retain) NSLevelIndicator *ratingIndicator;
@property (copy) NSString *name;
@property (copy) NSString *keyPath;
@property BOOL hasCreatedViews;

+ (id)templateWithName:(id)a0 withKeyPath:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setPredicate:(id)a0;
- (double)matchForPredicate:(id)a0;
- (id)predicateWithSubpredicates:(id)a0;
- (id)templateViews;
- (void)createViewsIfNecessary;
- (id)initWithName:(id)a0 withKeyPath:(id)a1;

@end
