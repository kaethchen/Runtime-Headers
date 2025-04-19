@class NSArray, NSMutableDictionary, NSView, NSTitlebarAccessoryViewController, NSWindow;
@protocol NSInspectorBarClient, NSInspectorBarDelegate;

@interface NSInspectorBar : NSObject <NSCoding> {
    NSArray *_defaultItems;
    NSArray *_defaultItemIdentifiers;
    NSMutableDictionary *_itemTable;
    id _defaultController;
    NSArray *_identifiers;
    NSTitlebarAccessoryViewController *_viewController;
    struct { unsigned char _visible : 1; unsigned char _textViewOwned : 1; unsigned char _baselineSeparator : 1; unsigned int _reserved : 29; } _flags;
    NSView *_inspectorBarView;
}

@property (copy) NSArray *defaultItemIdentifiers;
@property (readonly) NSArray *items;
@property (readonly) NSWindow *window;
@property id<NSInspectorBarDelegate> delegate;
@property (retain) id<NSInspectorBarClient> client;
@property (getter=isVisible) BOOL visible;
@property BOOL showsBaselineSeparator;

+ (id)_sharedSpacerItem;
+ (Class)standardItemControllerClass;
+ (id)standardTextItemIdentifiers;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_update;
- (id)_auxiliaryViewController;
- (id)_createItemsForIdentifiers:(id)a0;
- (long long)_defaultItemGravity;
- (id)_inspectorBarView;
- (BOOL)_isOwnedByTextView;
- (void)_setIsOwnedByTextView:(BOOL)a0;
- (void)_setWindow:(id)a0;
- (id)_startingWindowForSendAction:(SEL)a0;
- (void)_tile;
- (BOOL)_updateAuxiliaryViewControllerIfAvailable;
- (id)convertAttributes:(id)a0;
- (id)convertFont:(id)a0;
- (id)defaultItems;
- (void)inspectorBarViewDidLoad:(id)a0;
- (id)itemForIdentifier:(id)a0;
- (void)setShowsBaselineSeparator:(BOOL)a0;
- (void)setVisible:(BOOL)a0;
- (BOOL)showsBaselineSeparator;

@end
