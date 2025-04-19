@interface MSHistoryItem : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _position;
    void /* unknown type, empty encoding */ _positionIndex;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) double position;
@property (nonatomic) long long positionIndex;

+ (void)beforeFetchWithStore:(id)a0;
+ (id)optionsWith:(id)a0;
+ (void)pruneHistoryItemsWithStore:(id)a0;

- (id)initWithPosition:(double)a0 positionIndex:(long long)a1;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2;
- (id)initWithStore:(id)a0 position:(double)a1 positionIndex:(long long)a2;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1;

@end
