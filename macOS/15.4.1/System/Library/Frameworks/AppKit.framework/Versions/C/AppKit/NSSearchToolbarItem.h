@class NSString, NSSearchToolbarItemView, NSSearchField, NSView, NSObject;
@protocol NSSearchToolbarItemDelegate;

@interface NSSearchToolbarItem : NSToolbarItem <NSSearchFieldDelegate, _NSTextFieldHostingToolbarItem> {
    BOOL _isEditing;
    BOOL _forceVisbility;
    BOOL _inTemporaryIconDisplayMode;
    NSObject<NSSearchToolbarItemDelegate> *_delegate;
}

@property (copy) NSString *stringValue;
@property (copy) NSString *placeholderString;
@property (weak) NSObject<NSSearchToolbarItemDelegate> *delegate;
@property (readonly) NSSearchToolbarItemView *_view;
@property (readonly) BOOL _usesNativeSearchField;
@property (readonly) BOOL _usesBridgedSearchField;
@property id cancelButtonTarget;
@property SEL cancelButtonAction;
@property BOOL allowsButtonRepresentation;
@property double minimumWidthForSearchFieldRepresentation;
@property double preferredWidthForSearchFieldRepresentation;
@property (retain) NSSearchField *searchField;
@property (retain) NSView *view;
@property BOOL resignsFirstResponderWithCancel;
@property double preferredWidthForSearchField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)classFallbacksForKeyedArchiver;

- (void)dealloc;
- (void).cxx_destruct;
- (void)beginEditing;
- (void)encodeWithCoder:(id)a0;
- (void)endEditing;
- (id)initWithCoder:(id)a0;
- (void)setTarget:(id)a0;
- (id)target;
- (void)setTag:(long long)a0;
- (void)setAction:(SEL)a0;
- (id)view;
- (void)cancel;
- (void)setView:(id)a0;
- (SEL)action;
- (long long)tag;
- (BOOL)_allowToolbarToStealEvent:(id)a0;
- (id)_bridgedSearchField;
- (void)_bridgedSearchFieldDidBeginEditing;
- (void)_bridgedSearchFieldDidEndEditing;
- (id)_computeDefaultMenuFormRepresentation;
- (void)_copyViewToCopiedItem:(id)a0;
- (void)_expandWindowForSearchToolbarItem:(id)a0;
- (id)_initWithItemIdentifier:(id)a0 searchField:(id)a1;
- (id)_searchField;
- (void)_searchToolbarItemSearchCancelled:(id)a0;
- (void)_setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)_setView:(id)a0 fromCoder:(id)a1;
- (void)_updateSearchFieldForControlSize:(unsigned long long)a0;
- (id)_viewForCoder:(id)a0;
- (void)beginSearchInteraction;
- (void)beginSearchSession;
- (struct CGSize { double x0; double x1; })compressedMinSize;
- (void)configureForDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1;
- (void)endSearchInteraction;
- (void)endSearchSession;
- (id)initWithItemIdentifier:(id)a0;
- (BOOL)isEditing;
- (unsigned long long)itemPosition;
- (double)preferredWidthForSearchFieldRepresentation;
- (void)setMaxSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMinSize:(struct CGSize { double x0; double x1; })a0;
- (void)setPreferredWidthForSearchFieldRepresentation:(double)a0;
- (void)textFieldDidAttachFieldEditor;
- (void)textFieldDidDetachFieldEditor;
- (void)updateVisualStateForEditingBegan;
- (void)updateVisualStateForEditingEnded;
- (long long)visibilityPriority;

@end
