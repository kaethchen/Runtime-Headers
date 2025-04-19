@class NSButton, NSGroupTouchBarItem, NSString, CNAddFieldTouchBar, NSTouchBar, NSStackView, NSPopoverTouchBarItem;
@protocol CNCollectionViewTouchBarDelegate;

@interface CNCollectionViewTouchBar : NSObject <CNAddFieldTouchBarDelegate, NSTouchBarProvider>

@property (weak) id<CNCollectionViewTouchBarDelegate> delegate;
@property (retain, nonatomic) NSTouchBar *touchBar;
@property (retain, nonatomic) CNAddFieldTouchBar *addFieldTouchBar;
@property (retain, nonatomic) NSPopoverTouchBarItem *addFieldPopoverItem;
@property (retain, nonatomic) NSStackView *collectionStackView;
@property (retain, nonatomic) NSButton *removeButton;
@property (retain, nonatomic) NSGroupTouchBarItem *groupItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)addField:(id)a0;
- (void)updateTouchBar;
- (void)_updateTouchBarIdentifiers;
- (void)addContact;
- (void)addGroup;
- (BOOL)canAddContactOrGroup;
- (BOOL)canAddField;
- (void)selectField:(id)a0;
- (void)setUpAddFieldItemAndTouchBar;
- (void)setUpCollectionStackView;
- (void)setUpGroupItem;
- (void)setUpRemoveButton;
- (void)setUpTouchBar;
- (void)updateFields;
- (void)updateSelectedLabel;

@end
