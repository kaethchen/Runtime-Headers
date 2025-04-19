@class NSMutableArray, NSArray, NSImage, NSString, NSIndexPath;

@interface AMGroup : NSObject <NSCopying>

@property (weak) AMGroup *_parentGroup;
@property (readonly, nonatomic) NSImage *icon;
@property (readonly, nonatomic, getter=isLeafGroup) BOOL leafGroup;
@property (readonly, nonatomic) NSArray *lineage;
@property (readonly, nonatomic) NSArray *ancestors;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) long long numberOfChildGroups;
@property (readonly, nonatomic) long long numberOfAssets;
@property (readonly, nonatomic) NSArray *deepAssets;
@property (copy) NSString *name;
@property (copy) NSString *type;
@property (retain) NSImage *smallIcon;
@property (retain) NSImage *largeIcon;
@property BOOL useSmallIcon;
@property (getter=isReadOnly, setter=setReadOnly:) BOOL readOnly;
@property (getter=isExpanded, setter=setIsExpanded:) BOOL expanded;
@property (retain, nonatomic) AMGroup *parentGroup;
@property (retain, nonatomic) NSMutableArray *childGroups;
@property (retain, nonatomic) NSMutableArray *assets;
@property (retain, nonatomic) NSArray *assetSortDescriptors;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)groupWithName:(id)a0;
+ (id)groupWithName:(id)a0 smallIcon:(id)a1 largeIcon:(id)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithName:(id)a0;
- (void)invalidate;
- (long long)depth;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithPropertyListRepresentation:(id)a0;
- (id)propertyListRepresentation;
- (void)addAsset:(id)a0;
- (void)removeAsset:(id)a0;
- (unsigned long long)indexOfGroup:(id)a0;
- (void)removeAllAssets;
- (BOOL)containsAsset:(id)a0;
- (void)addChildGroup:(id)a0;
- (void)insertChildGroup:(id)a0 atIndex:(long long)a1;
- (void)removeChildGroup:(id)a0;
- (BOOL)containsAssetWithIdentifier:(id)a0;
- (void)didChangeAssets;
- (void)didChangeGroups;
- (id)firstChildGroupWithDisplayName:(id)a0;
- (void)describeInto:(id)a0 withDepth:(long long)a1;
- (id)initWithName:(id)a0 smallIcon:(id)a1 largeIcon:(id)a2;
- (void)insertAsset:(id)a0 atIndex:(long long)a1;
- (long long)localizedCaseInsensitiveCompareForActionCategories:(id)a0;
- (long long)localizedCaseInsensitiveCompareForVariableCategories:(id)a0;
- (void)willChangeAssets;
- (void)willChangeGroups;

@end
