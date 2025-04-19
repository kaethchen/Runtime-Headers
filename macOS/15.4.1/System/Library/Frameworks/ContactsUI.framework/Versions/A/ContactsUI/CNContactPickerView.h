@class NSView, NSArray, NSScrollView, CNContactListView, NSVisualEffectView, CNContactPickerViewLayout, CNContactPickerBorderView, NSMutableDictionary, CNGroupListView, ABBookSearchField;

@interface CNContactPickerView : NSView

@property (retain) NSScrollView *contactListScrollView;
@property (retain) NSView *groupListScrollView;
@property (retain) CNContactPickerBorderView *verticalBorderView;
@property (retain) CNContactPickerBorderView *contactCardBorderView;
@property (retain) NSVisualEffectView *sideBarVisualEffectView;
@property (retain) NSView *searchFieldRowView;
@property (retain) NSView *mainRowView;
@property (retain) CNContactPickerViewLayout *pickerLayout;
@property (retain) NSMutableDictionary *sections;
@property (retain, nonatomic) NSView *contentView;
@property (retain, nonatomic) NSView *rightTopBarView;
@property (retain) NSArray *customConstraints;
@property BOOL shouldSetFirstResponder;
@property (weak, nonatomic) CNContactListView *contactListView;
@property (weak, nonatomic) CNGroupListView *groupListView;
@property (retain, nonatomic) ABBookSearchField *searchField;
@property (retain, nonatomic) NSView *contactCardView;
@property (nonatomic, getter=isGroupListVisible) BOOL groupListVisible;
@property (nonatomic, getter=isSearchFieldVisible) BOOL searchFieldVisible;
@property (nonatomic, getter=isContactCardVisible) BOOL contactCardVisible;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (BOOL)canSmoothFontsInLayer;
- (void)updateConstraints;
- (void)updateLayout;
- (void)viewWillDraw;
- (id)views;
- (void)addSection:(id)a0;
- (id)sectionWithIdentifier:(id)a0;
- (void)setupResponderChain;
- (void)showSectionWithIdentifier:(id)a0;
- (void)updateViewHierarchy;
- (id)viewForButtonConstraints;

@end
