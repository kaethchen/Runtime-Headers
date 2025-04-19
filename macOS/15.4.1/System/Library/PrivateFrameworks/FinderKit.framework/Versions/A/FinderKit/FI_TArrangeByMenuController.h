@class NSMenuItem, NSString, NSMenu, FI_TNodeViewSettings, FI_TViewOptionsSettingsController;

@interface FI_TArrangeByMenuController : NSObject <NSMenuItemValidation> {
    NSMenuItem *_selectedGroupMenuItem;
    NSMenuItem *_selectedSortMenuItem;
    int _groupBy;
    int _sortBy;
    struct TNSWeakPtr<FI_TViewOptionsSettingsController> { FI_TViewOptionsSettingsController *fWeakObject; } _weakViewOptionsSettingsController;
    struct vector<TKeyValueBinder, std::allocator<TKeyValueBinder>> { struct TKeyValueBinder *__begin_; struct TKeyValueBinder *__end_; struct __compressed_pair<TKeyValueBinder *, std::allocator<TKeyValueBinder>> { struct TKeyValueBinder *__value_; } __end_cap_; } _keyValueBinders;
}

@property (retain, nonatomic) NSMenu *arrangeByMenu;
@property (retain, nonatomic) NSMenu *sortByMenu;
@property (weak, nonatomic) FI_TViewOptionsSettingsController *viewOptionsSettingsController;
@property (retain, nonatomic) FI_TNodeViewSettings *viewSettings;
@property (nonatomic) int groupBy;
@property (nonatomic) int sortBy;
@property (nonatomic) int selectedGroupByTag;
@property (nonatomic) int selectedSortByTag;
@property (nonatomic) BOOL inOpenSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)flipSelectedGroupByMenuItem:(id)a0 with:(id)a1;
+ (id)flipSelectedMenuItem:(id)a0 with:(id)a1 forGroupBy:(BOOL)a2;
+ (id)flipSelectedSortByMenuItem:(id)a0 with:(id)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)validateMenuItem:(id)a0;
- (void)aboutToTearDown;
- (void)cmdSortByLabel:(id)a0;
- (void)cmdArrangeByApplication:(id)a0;
- (void)cmdArrangeByApplicationCategory:(id)a0;
- (void)cmdArrangeByDateAdded:(id)a0;
- (void)cmdArrangeByDateCreated:(id)a0;
- (void)cmdArrangeByDateLastOpened:(id)a0;
- (void)cmdArrangeByDateModified:(id)a0;
- (void)cmdArrangeByFinderTags:(id)a0;
- (void)cmdArrangeByKind:(id)a0;
- (void)cmdArrangeByLabel:(id)a0;
- (void)cmdArrangeByName:(id)a0;
- (void)cmdArrangeByNone:(id)a0;
- (void)cmdArrangeByShareLastModifiedBy:(id)a0;
- (void)cmdArrangeBySharedBy:(id)a0;
- (void)cmdArrangeBySize:(id)a0;
- (void)cmdArrangeByVolume:(id)a0;
- (void)cmdSortByDateAdded:(id)a0;
- (void)cmdSortByDateCreated:(id)a0;
- (void)cmdSortByDateLastOpened:(id)a0;
- (void)cmdSortByDateModified:(id)a0;
- (void)cmdSortByKind:(id)a0;
- (void)cmdSortByLastModifiedBy:(id)a0;
- (void)cmdSortByName:(id)a0;
- (void)cmdSortByNone:(id)a0;
- (void)cmdSortBySharedBy:(id)a0;
- (void)cmdSortBySize:(id)a0;
- (void)cmdSortBySnapToGrid:(id)a0;
- (id)initWithViewSettings:(id)a0;
- (int)menuTagForGroupBy:(int)a0;
- (int)menuTagForSortBy:(int)a0;
- (void)removeCommandKeyEquivalents;
- (void)setGroupBy:(int)a0 menuItem:(id)a1;
- (void)setSortBy:(int)a0 menuItem:(id)a1;

@end
