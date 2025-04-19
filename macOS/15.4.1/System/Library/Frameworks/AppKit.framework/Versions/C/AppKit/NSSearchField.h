@class NSString, NSArray, NSMenu;
@protocol NSSearchFieldDelegate;

@interface NSSearchField : NSTextField <_NSBridgedSearchField> {
    struct { unsigned char _reserved2 : 2; unsigned char _isSearching : 1; unsigned int _reserved : 29; } _sfFlags;
    unsigned int _reserved2;
    unsigned int _reserved3;
    unsigned int _reserved4;
}

@property (getter=isEnabled) BOOL enabled;
@property (setter=_setFocusRingAnimationType:) long long _focusRingAnimationType;
@property (readonly) NSString *stringValue;
@property unsigned long long controlSize;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } searchTextBounds;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } searchButtonBounds;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cancelButtonBounds;
@property (copy) NSArray *recentSearches;
@property (copy) NSString *recentsAutosaveName;
@property (retain) NSMenu *searchMenuTemplate;
@property BOOL sendsWholeSearchString;
@property long long maximumRecents;
@property BOOL sendsSearchStringImmediately;
@property (weak) id<NSSearchFieldDelegate> delegate;

+ (void)initialize;
+ (BOOL)allowsWritingTools;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateSearchingState;
- (BOOL)becomeFirstResponder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cancelButtonBounds;
- (BOOL)centersPlaceholder;
- (BOOL)isCurrentlyEditing;
- (id)ns_widgetType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForCancelButtonWhenCentered:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForSearchButtonWhenCentered:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForSearchTextWhenCentered:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchButtonBounds;
- (BOOL)searchFieldCell:(id)a0 shouldChangeCancelButtonVisibility:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchTextBounds;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;
- (void)setCentersPlaceholder:(BOOL)a0;
- (void)updateCell:(id)a0;

@end
