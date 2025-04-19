@class NSData, NSDate;

@interface MSAnonymousCredential : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _anonymousId;
    void /* unknown type, empty encoding */ _mapsToken;
    void /* unknown type, empty encoding */ _mapsTokenCreatedAt;
    void /* unknown type, empty encoding */ _mapsTokenTTL;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _reviewedPlaceChanges;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSData *anonymousId;
@property (nonatomic, copy) NSData *mapsToken;
@property (nonatomic, copy) NSDate *mapsTokenCreatedAt;
@property (nonatomic) long long mapsTokenTTL;
@property (nonatomic) long long positionIndex;

- (void).cxx_destruct;
- (void)addReviewedPlace:(id)a0;
- (id)fetchReviewedPlaces;
- (void)flushChanges;
- (id)initWithAnonymousId:(id)a0 mapsToken:(id)a1 mapsTokenCreatedAt:(id)a2 mapsTokenTTL:(long long)a3 positionIndex:(long long)a4;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2;
- (id)initWithStore:(id)a0 anonymousId:(id)a1 mapsToken:(id)a2 mapsTokenCreatedAt:(id)a3 mapsTokenTTL:(long long)a4 positionIndex:(long long)a5;
- (void)removeReviewedPlace:(id)a0;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1;

@end
