@class _NCShieldView, NSBox, NSView, NSViewController, NCListViewDeleteButton, NSLayoutConstraint, NSButton;
@protocol NCWidgetListItemDelegate;

@interface NCListItemViewController : NSViewController {
    double _originaldeleteButtonWidth;
}

@property (weak, nonatomic) NSView *containerView;
@property (weak, nonatomic) NSLayoutConstraint *trailingDraggContainerConstraint;
@property (weak, nonatomic) NSView *itemView;
@property (retain, nonatomic) NSView *removeContainer;
@property (weak, nonatomic) NSLayoutConstraint *itemTrailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *itemLeadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *lineLeftConstraint;
@property (weak, nonatomic) NSLayoutConstraint *lineRightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *deleteLeadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *grabberTrailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *deleteButtonSpacingConstraint;
@property (weak, nonatomic) NCListViewDeleteButton *deleteButton;
@property (weak, nonatomic) NSButton *removeButton;
@property (weak, nonatomic) NSView *grabberContainer;
@property (weak, nonatomic) NSButton *grabberButton;
@property (weak, nonatomic) _NCShieldView *shieldView;
@property (weak, nonatomic) NSLayoutConstraint *leftRemoveConstraint;
@property (weak, nonatomic) NSLayoutConstraint *deleteButtonWidthConstraint;
@property (weak, nonatomic) NSBox *dividerLine;
@property (retain, nonatomic) NSViewController *contentViewController;
@property (weak, nonatomic) id<NCWidgetListItemDelegate> delegate;
@property (nonatomic) BOOL deleting;
@property (nonatomic) BOOL expandedShield;
@property (nonatomic) BOOL shieldExpandedInEditMode;
@property (nonatomic) BOOL deleteAreaHidden;
@property (nonatomic) BOOL delegateCalled;
@property (nonatomic) BOOL canBeReordered;
@property (nonatomic) BOOL canBeRemoved;
@property (nonatomic) BOOL dividerLineHidden;
@property (nonatomic) BOOL editing;
@property (nonatomic) BOOL shieldEnabled;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (id)nibBundle;
- (void)removeAction:(id)a0;
- (void)deleteAction:(id)a0;
- (void)performInitialLayout;

@end
