@class GEOStorageRouteRequestStorage, NSData;

@interface MSHistoryDirectionsItem : MSHistoryItem {
    void /* unknown type, empty encoding */ _navigationInterrupted;
    void /* unknown type, empty encoding */ _routeRequestStorage;
    void /* unknown type, empty encoding */ _sharedETAData;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) BOOL navigationInterrupted;
@property (nonatomic, retain) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;

- (void).cxx_destruct;
- (id)initWithNavigationInterrupted:(BOOL)a0 routeRequestStorage:(id)a1 sharedETAData:(id)a2;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2;
- (id)initWithStore:(id)a0 navigationInterrupted:(BOOL)a1 routeRequestStorage:(id)a2 sharedETAData:(id)a3;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1;

@end
