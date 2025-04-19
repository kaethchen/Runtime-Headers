@class NSMutableDictionary;

@interface FI_TListViewSettings : NSObject

@property (retain, nonatomic) NSMutableDictionary *settings;
@property (nonatomic) double iconSize;
@property (nonatomic) double textSize;
@property (nonatomic) BOOL useRelativeDates;
@property (nonatomic) BOOL calculateAllSizes;
@property (nonatomic) BOOL showIconPreview;
@property (nonatomic) int sortColumn;
@property (nonatomic) BOOL userDidChangeSort;
@property (retain, nonatomic) NSMutableDictionary *columnSettings;
@property (nonatomic) struct CGPoint { double x; double y; } scrollPosition;

+ (void)applySharedSmartSearchDefaultsToSettings:(id)a0;
+ (id)backwardCompatibleSettings:(id)a0;
+ (id)columnDictionaryForWidth:(long long)a0 index:(long long)a1 sortOrder:(BOOL)a2 visibility:(BOOL)a3;
+ (id)columnDictionaryFromColumnArray:(void *)a0;
+ (BOOL)columnIsBuiltInColumn:(int)a0;
+ (BOOL)columnIsSpotlightAttribute:(int)a0;
+ (id)defaultSettingsForNewUser;
+ (id)extendedSettings:(id)a0;
+ (BOOL)isSnowLeopardColumn:(int)a0;
+ (id)settingsForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
+ (id)settingsFromBrowserSettings:(void *)a0;
+ (id)settingsFromExtendedSettings:(id)a0;
+ (id)settingsFromPList:(id)a0;
+ (id)settingsFromViewOptions:(id)a0;
+ (BOOL)useExtendedSettings:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)columnCount;
- (BOOL)isEquivalentTo:(id)a0;
- (unsigned long long)checkIntegrity;
- (unsigned long long)indexForColumn:(int)a0;
- (unsigned long long)widthForColumn:(int)a0;
- (void)addBladeRunnerStatusSettingsIfNeeded:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)addDateAddedSettingsIfNeeded;
- (void)addSpotlightListViewColumn:(int)a0;
- (BOOL)checkNumberSettingForKey:(id)a0 lowValue:(double)a1 highValue:(double)a2;
- (struct vector<TSortBy, std::allocator<TSortBy>> { int *x0; int *x1; struct __compressed_pair<TSortBy *, std::allocator<TSortBy>> { int *x0; } x2; })columnPropertiesInOrder;
- (int)columnPropertyAtIndex:(unsigned long long)a0;
- (id)initWithListBrowserSettings:(void *)a0;
- (id)initWithPList:(id)a0;
- (void)setColumnsOrder:(const void *)a0;
- (void)setSortOrderAscendingForColumn:(int)a0 ascending:(BOOL)a1;
- (void)setVisibleForColumn:(int)a0 visible:(BOOL)a1;
- (void)setWidthForColumn:(int)a0 width:(unsigned long long)a1;
- (BOOL)sortOrderAscendingForColumn:(int)a0;
- (BOOL)visibleForColumn:(int)a0;

@end
