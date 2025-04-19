@class NSArray, NSString, NSImage, NSMutableArray;

@interface NSToolbarItemGroup : NSToolbarItem {
    NSMutableArray *_groupItems;
    long long _controlRepresentation;
    long long _selectionMode;
    NSString *_title;
    NSImage *_image;
    id _target;
    SEL _action;
    unsigned long long _itemPosition;
    struct { unsigned char dirtiedLayout : 1; } _giFlags;
}

@property (copy) NSArray *subitems;
@property long long controlRepresentation;
@property long long selectionMode;
@property long long selectedIndex;

+ (id)groupWithItemIdentifier:(id)a0 images:(id)a1 selectionMode:(long long)a2 labels:(id)a3 target:(id)a4 action:(SEL)a5;
+ (id)groupWithItemIdentifier:(id)a0 titles:(id)a1 selectionMode:(long long)a2 labels:(id)a3 target:(id)a4 action:(SEL)a5;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTarget:(id)a0;
- (id)target;
- (void)setAction:(SEL)a0;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (id)view;
- (id)image;
- (id)title;
- (SEL)action;
- (id)_buttonAtIndex:(unsigned long long)a0;
- (void)_setItemViewer:(id)a0;
- (id)_allocDefaultView;
- (BOOL)_applicableLabelIsEnabledAtIndex:(long long)a0 forDisplayMode:(unsigned long long)a1 isInPalette:(BOOL)a2;
- (id)_applicableLabelsArrayForDisplayMode:(unsigned long long)a0 isInPalette:(BOOL)a1;
- (void)_collectItemRectsForViews:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_forceSetView:(id)a0;
- (BOOL)_groupItemHandlesTooltipsInternally;
- (id)_initialViewToSelectFromDirection:(long long)a0;
- (BOOL)_isCustomItemType;
- (BOOL)_isEnabledAndHasEnabledSubitem;
- (BOOL)_isHiddenOrHasHiddenSubitems;
- (id)_itemAtLabelIndex:(long long)a0;
- (id)_itemAtViewIndex:(long long)a0;
- (id)_itemAtVisibleLabelIndex:(long long)a0;
- (long long)_itemIndexAtVisibleLabelIndex:(long long)a0;
- (void)_itemLayoutChanged;
- (id)_itemsWithToolTips;
- (id)_menuFormRepresentationForOverflowMenu;
- (void)_noteCustomizationModeRunning:(BOOL)a0;
- (void)_performActionForPicker:(id)a0;
- (void)_setToolbar:(id)a0;
- (void)_standardCommonSubitemMenuFormRepresentationClicked:(id)a0;
- (BOOL)_subitemsSupportLabelOnlyMode;
- (void)_updateItemPosition;
- (BOOL)_viewIsEnabledAtIndex:(long long)a0;
- (id)_viewsArray;
- (void)configureForDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1;
- (id)initWithItemIdentifier:(id)a0;
- (BOOL)isGroupItem;
- (BOOL)isSelectedAtIndex:(long long)a0;
- (unsigned long long)itemPosition;
- (id)menuFormRepresentation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForItem:(id)a0;
- (void)setBordered:(BOOL)a0;
- (void)setSelected:(BOOL)a0 atIndex:(long long)a1;
- (void)validate;
- (BOOL)validateMenuItem:(id)a0;

@end
