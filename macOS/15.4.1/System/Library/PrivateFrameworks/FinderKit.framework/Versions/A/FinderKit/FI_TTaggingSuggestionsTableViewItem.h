@class NSString, NSImage, FI_TLabelView, NSObject;

@interface FI_TTaggingSuggestionsTableViewItem : FI_TTableViewItem {
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _labelColorBinder;
}

@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) long long labelColor;
@property (readonly, nonatomic) BOOL userVisible;
@property (readonly, nonatomic) BOOL pinned;
@property (readonly, nonatomic) long long sidebarIndex;
@property (readonly, nonatomic) BOOL isShowAll;
@property (readonly, nonatomic) BOOL isTag;
@property (readonly, nonatomic) BOOL isCreateTag;
@property (readonly, nonatomic) BOOL isMoveTag;
@property (readonly, nonatomic) BOOL needsCustomSelect;
@property (copy, nonatomic) NSString *tagName;
@property (weak, nonatomic) FI_TLabelView *labelColorView;

+ (id)itemForMoveTag:(const void *)a0;
+ (id)itemForCreateNewTag:(const void *)a0 labelColorView:(id)a1;
+ (id)itemForTag:(id)a0 needsCustomSelect:(BOOL)a1;
+ (id)showAllItem;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setLabelColor:(long long)a0;
- (void)setColorNumber:(id)a0;
- (id)colorNumber;
- (id)initWithTag:(id)a0 needsCustomSelect:(BOOL)a1;

@end
