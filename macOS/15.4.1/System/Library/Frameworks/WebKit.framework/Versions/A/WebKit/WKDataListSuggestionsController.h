@class NSString, NSView;

@interface WKDataListSuggestionsController : NSObject <NSTableViewDataSource, NSTableViewDelegate> {
    struct WeakPtr<WebKit::WebDataListSuggestionsDropdownMac, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _dropdown;
    struct Vector<WebCore::DataListSuggestion, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct DataListSuggestion *m_buffer; unsigned int m_capacity; unsigned int m_size; } _suggestions;
    NSView *_presentingView;
    struct RetainPtr<NSScrollView> { void *m_ptr; } _scrollView;
    struct RetainPtr<WKDataListSuggestionWindow> { void *m_ptr; } _enclosingWindow;
    struct RetainPtr<WKDataListSuggestionTableView> { void *m_ptr; } _table;
    BOOL _showDividersBetweenCells;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (long long)numberOfRowsInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)updateWithInformation:(void *)a0;
- (struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; })currentSelectedString;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dropdownRectForElementRect:(const struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } *)a0;
- (id)initWithInformation:(void *)a0 inView:(id)a1;
- (void)moveSelectionByDirection:(const void *)a0;
- (void)notifyAccessibilityClients:(id)a0;
- (void)selectedRow:(id)a0;
- (void)showSuggestionsDropdown:(void *)a0;

@end
