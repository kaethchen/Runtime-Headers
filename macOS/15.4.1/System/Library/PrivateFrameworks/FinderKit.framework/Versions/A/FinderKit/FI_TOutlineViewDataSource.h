@class NSString, FI_TOutlineView;

@interface FI_TOutlineViewDataSource : NSTreeController <NSOutlineViewDataSource> {
    struct TNSWeakPtr<FI_TOutlineView> { FI_TOutlineView *fWeakObject; } _weakOutlineView;
    struct vector<TKeyValueBinder, std::allocator<TKeyValueBinder>> { struct TKeyValueBinder *__begin_; struct TKeyValueBinder *__end_; struct __compressed_pair<TKeyValueBinder *, std::allocator<TKeyValueBinder>> { struct TKeyValueBinder *__value_; } __end_cap_; } _keyValueBinders;
}

@property (weak, nonatomic) FI_TOutlineView *outlineView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)clear;
- (void)awakeFromNib;
- (id)initWithContent:(id)a0;
- (BOOL)outlineView:(id)a0 acceptDrop:(id)a1 item:(id)a2 childIndex:(long long)a3;
- (unsigned long long)outlineView:(id)a0 validateDrop:(id)a1 proposedItem:(id)a2 proposedChildIndex:(long long)a3;
- (void)initCommon;
- (void)awakeCommon;
- (void)bindToTableColumn:(id)a0;
- (id)flattenedContent;
- (void)unbindFromTableColumn:(id)a0;

@end
