@class NSArray, PXSItem, NSString;
@protocol PXSItemFinderClient;

@interface PXSItemTextFinderClient : NSObject <NSTextFinderClient>

@property (retain, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) PXSItem *rootItem;
@property (weak, nonatomic) id<PXSItemFinderClient> client;
@property (readonly, getter=isSelectable) BOOL selectable;
@property (readonly) BOOL allowsMultipleSelection;
@property (readonly, getter=isEditable) BOOL editable;
@property (readonly) NSString *string;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } firstSelectedRange;
@property (copy) NSArray *selectedRanges;
@property (readonly, copy) NSArray *visibleCharacterRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)reloadData;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)stringAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 endsWithSearchBoundary:(BOOL *)a2;
- (unsigned long long)stringLength;
- (id)_tokenForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_tokensForItem:(id)a0;
- (id)_tokenForItem:(id)a0;
- (id)initWithRootItem:(id)a0;

@end
