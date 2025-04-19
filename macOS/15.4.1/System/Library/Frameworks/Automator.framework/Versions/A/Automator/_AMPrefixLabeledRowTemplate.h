@class NSString, NSFormatter, NSPopUpButton;

@interface _AMPrefixLabeledRowTemplate : NSPredicateEditorRowTemplate

@property (retain) NSPopUpButton *labelPopupButton;
@property BOOL hasCreatedViews;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSFormatter *formatter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)templateViews;
- (void)createViewsIfNecessary;

@end
