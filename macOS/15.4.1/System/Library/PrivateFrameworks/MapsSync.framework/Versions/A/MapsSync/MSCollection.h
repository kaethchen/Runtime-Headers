@class NSString, NSData;

@interface MSCollection : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _collectionDescription;
    void /* unknown type, empty encoding */ _image;
    void /* unknown type, empty encoding */ _imageUrl;
    void /* unknown type, empty encoding */ _placesCount;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _title;
    void /* unknown type, empty encoding */ _placeChanges;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, readonly) int placesCount;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)addPlace:(id)a0;
- (void)beforeDeleteWithManaged:(id)a0;
- (id)fetchPlaces;
- (void)flushChanges;
- (id)initWithCollectionDescription:(id)a0 image:(id)a1 imageUrl:(id)a2 positionIndex:(long long)a3 title:(id)a4;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2;
- (id)initWithStore:(id)a0 collectionDescription:(id)a1 image:(id)a2 imageUrl:(id)a3 positionIndex:(long long)a4 title:(id)a5;
- (void)removePlace:(id)a0;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1;

@end
