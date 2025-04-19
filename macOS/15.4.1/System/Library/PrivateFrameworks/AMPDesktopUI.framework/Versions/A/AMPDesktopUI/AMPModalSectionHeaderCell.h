@class NSTextField, NSString, NSLayoutConstraint, NSButton;

@interface AMPModalSectionHeaderCell : NSTableCellView

@property (retain, nonatomic) NSTextField *titleField;
@property (retain, nonatomic) NSTextField *subtitleField;
@property (retain, nonatomic) NSButton *actionButton;
@property (retain, nonatomic) NSLayoutConstraint *titleBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *actionBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *actionCenterConstraint;
@property (nonatomic) unsigned long long actionStyleIB;
@property (readonly, nonatomic) BOOL _actionIsBezeled;
@property (readonly, nonatomic) BOOL _actionIsDestructive;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *actionTitle;
@property (nonatomic) unsigned long long actionStyle;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (id)keyPathsForValuesInvalidatingConstraints;
+ (id)keyPathsForValuesAffecting_actionIsBezeled;
+ (id)keyPathsForValuesAffecting_actionIsDestructive;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateConstraints;
- (id)initWithTitle:(id)a0 subtitle:(id)a1;
- (void)commonSetup;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 actionTitle:(id)a2 actionStyle:(unsigned long long)a3 actionBlock:(id /* block */)a4;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 actionTitle:(id)a2 actionStyle:(unsigned long long)a3 target:(id)a4 action:(SEL)a5;
- (id)propertyKeysForViewSpy;
- (void)reflectActionButton:(id)a0;

@end
