@class NSString, _PXTreeTouchBarSegmentedControl, NSTouchBarItem, NSMutableArray, NSStackView;
@protocol PXTreeTouchBarItemControllerDelegate, PXTreeTouchBarItemControllerDataSource;

@interface PXTreeTouchBarItemController : NSObject <NSTouchBarDelegate> {
    struct { BOOL canSelectItem; BOOL didSelectItem; } _delegateRespondsTo;
    struct { BOOL recentItem; BOOL shouldExpandChildrenOfItem; } _dataSourceRespondsTo;
    struct { BOOL stackView; } _needsUpdateFlags;
}

@property (readonly, nonatomic) NSString *stackViewTouchBarIdentifier;
@property (readonly, nonatomic) NSMutableArray *selectedItems;
@property (retain, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) _PXTreeTouchBarSegmentedControl *rootSegmentedControl;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *rootTouchBarItemIdentifier;
@property (readonly, nonatomic) NSTouchBarItem *rootTouchBarItem;
@property (nonatomic) unsigned long long options;
@property (weak, nonatomic) id<PXTreeTouchBarItemControllerDelegate> delegate;
@property (weak, nonatomic) id<PXTreeTouchBarItemControllerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (void)reloadData;
- (void)_updateStackViewIfNeeded;
- (void)_updateStackView;
- (id)_createSegmentedControlForItem:(id)a0;
- (void)_didSelectItem:(id)a0;
- (void)_invalidateRootSegmentedControl;
- (void)_collectViews:(id)a0 forItem:(id)a1;
- (void)_configureSegmentedControl:(id)a0 withDisclosure:(BOOL)a1 enabled:(BOOL)a2;
- (id)_createBackSegmentedControl;
- (void)_handleBackSegmentedControl:(id)a0;
- (void)_handleItemSegmentedControl:(id)a0;
- (void)_handleRootSegmentedControl:(id)a0;
- (void)_invalidateStackView;
- (void)_popAllSelectedItems;
- (void)_popSelectedItem;
- (void)_pushSelectedItem:(id)a0;
- (void)_updateRootSegmentedControl;
- (void)reloadCanSelectItems;
- (void)reloadRecentItem;

@end
