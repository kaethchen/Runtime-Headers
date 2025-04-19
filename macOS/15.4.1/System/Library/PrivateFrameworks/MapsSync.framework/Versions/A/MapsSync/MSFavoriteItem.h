@class GEOMapItemStorage, NSString, NSDate, NSNumber;

@interface MSFavoriteItem : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _customName;
    void /* unknown type, empty encoding */ _hidden;
    void /* unknown type, empty encoding */ _latitude;
    void /* unknown type, empty encoding */ _longitude;
    void /* unknown type, empty encoding */ _mapItemAddress;
    void /* unknown type, empty encoding */ _mapItemCategory;
    void /* unknown type, empty encoding */ _mapItemLastRefreshed;
    void /* unknown type, empty encoding */ _mapItemName;
    void /* unknown type, empty encoding */ _muid;
    void /* unknown type, empty encoding */ _originatingAddressString;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _shortcutIdentifier;
    void /* unknown type, empty encoding */ _source;
    void /* unknown type, empty encoding */ _type;
    void /* unknown type, empty encoding */ _version;
    void /* unknown type, empty encoding */ _mapItemStorage;
    void /* unknown type, empty encoding */ _handleChanges;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) short favoriteType;
@property (nonatomic) short sourceType;
@property (nonatomic, copy) NSString *placeItemNote;
@property (nonatomic, copy) NSString *customName;
@property (nonatomic) BOOL hidden;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, copy) NSString *mapItemAddress;
@property (nonatomic, copy) NSString *mapItemCategory;
@property (nonatomic, copy) NSDate *mapItemLastRefreshed;
@property (nonatomic, copy) NSString *mapItemName;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, copy) NSString *originatingAddressString;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *shortcutIdentifier;
@property (nonatomic) short source;
@property (nonatomic) short type;
@property (nonatomic) short version;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;

+ (id)findDuplicatesWithContext:(id)a0;
+ (id)mergeWithDuplicates:(id)a0;
+ (id)optionsWith:(id)a0;
+ (id)strippedMapItemWith:(id)a0;

- (void).cxx_destruct;
- (void)addContactHandle:(id)a0;
- (id)fetchContactHandles;
- (void)flushChanges;
- (id)initWithCustomName:(id)a0 hidden:(BOOL)a1 latitude:(id)a2 longitude:(id)a3 mapItemAddress:(id)a4 mapItemCategory:(id)a5 mapItemLastRefreshed:(id)a6 mapItemName:(id)a7 muid:(id)a8 originatingAddressString:(id)a9 positionIndex:(long long)a10 shortcutIdentifier:(id)a11 source:(short)a12 type:(short)a13 version:(short)a14;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2;
- (id)initWithStore:(id)a0 customName:(id)a1 hidden:(BOOL)a2 latitude:(id)a3 longitude:(id)a4 mapItemAddress:(id)a5 mapItemCategory:(id)a6 mapItemLastRefreshed:(id)a7 mapItemName:(id)a8 muid:(id)a9 originatingAddressString:(id)a10 positionIndex:(long long)a11 shortcutIdentifier:(id)a12 source:(short)a13 type:(short)a14 version:(short)a15;
- (void)moveAfterItem:(id)a0 completion:(id /* block */)a1;
- (void)moveBeforeItem:(id)a0 completion:(id /* block */)a1;
- (void)moveToBackWithCompletion:(id /* block */)a0;
- (void)moveToFrontWithCompletion:(id /* block */)a0;
- (void)onFirstSaveWithObject:(id)a0 context:(id)a1;
- (void)removeContactHandle:(id)a0;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1;

@end
