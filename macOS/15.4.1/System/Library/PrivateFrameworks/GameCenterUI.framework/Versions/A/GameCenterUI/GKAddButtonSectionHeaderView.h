@class NSButton, NSString, NSTextField;

@interface GKAddButtonSectionHeaderView : NSUICollectionReusableView

@property (retain, nonatomic) NSButton *addButton;
@property (retain, nonatomic) NSTextField *addTitleField;
@property (nonatomic) NSString *addTitle;
@property (nonatomic) id addButtonTarget;
@property (nonatomic) SEL addButtonAction;

+ (void)registerSupplementaryViewClassesForKind:(id)a0 withCollectionView:(id)a1;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)addTitle;
- (void)setAddTitle:(id)a0;

@end
