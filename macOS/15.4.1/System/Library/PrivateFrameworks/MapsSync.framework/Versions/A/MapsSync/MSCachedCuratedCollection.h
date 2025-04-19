@class NSString, NSData, NSDate;

@interface MSCachedCuratedCollection : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _collectionDescription;
    void /* unknown type, empty encoding */ _curatedCollectionIdentifier;
    void /* unknown type, empty encoding */ _image;
    void /* unknown type, empty encoding */ _imageUrl;
    void /* unknown type, empty encoding */ _isTombstone;
    void /* unknown type, empty encoding */ _lastFetchedDate;
    void /* unknown type, empty encoding */ _lastSignificantChangeDate;
    void /* unknown type, empty encoding */ _placesCount;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _publisherAttribution;
    void /* unknown type, empty encoding */ _resultProviderIdentifier;
    void /* unknown type, empty encoding */ _title;
    void /* unknown type, empty encoding */ _titleLocale;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic) unsigned long long curatedCollectionIdentifier;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic) BOOL isTombstone;
@property (nonatomic, copy) NSDate *lastFetchedDate;
@property (nonatomic, copy) NSDate *lastSignificantChangeDate;
@property (nonatomic) int placesCount;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *publisherAttribution;
@property (nonatomic) int resultProviderIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleLocale;

- (void).cxx_destruct;
- (id)initWithCollectionDescription:(id)a0 curatedCollectionIdentifier:(unsigned long long)a1 image:(id)a2 imageUrl:(id)a3 isTombstone:(BOOL)a4 lastFetchedDate:(id)a5 lastSignificantChangeDate:(id)a6 placesCount:(int)a7 positionIndex:(long long)a8 publisherAttribution:(id)a9 resultProviderIdentifier:(int)a10 title:(id)a11 titleLocale:(id)a12;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2;
- (id)initWithStore:(id)a0 collectionDescription:(id)a1 curatedCollectionIdentifier:(unsigned long long)a2 image:(id)a3 imageUrl:(id)a4 isTombstone:(BOOL)a5 lastFetchedDate:(id)a6 lastSignificantChangeDate:(id)a7 placesCount:(int)a8 positionIndex:(long long)a9 publisherAttribution:(id)a10 resultProviderIdentifier:(int)a11 title:(id)a12 titleLocale:(id)a13;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1;

@end
