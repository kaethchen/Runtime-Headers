@class NSData;

@interface MSAnalyticsIdentifier : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _data;
    void /* unknown type, empty encoding */ _positionIndex;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSData *data;
@property (nonatomic) long long positionIndex;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 positionIndex:(long long)a1;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2;
- (id)initWithStore:(id)a0 data:(id)a1 positionIndex:(long long)a2;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1;

@end
