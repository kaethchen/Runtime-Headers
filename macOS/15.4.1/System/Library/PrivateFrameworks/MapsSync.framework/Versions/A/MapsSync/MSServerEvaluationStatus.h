@interface MSServerEvaluationStatus : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _arpStatus;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _rapStatus;
    void /* unknown type, empty encoding */ _reliabilityStatus;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) BOOL arpStatus;
@property (nonatomic) long long positionIndex;
@property (nonatomic) BOOL rapStatus;
@property (nonatomic) BOOL reliabilityStatus;

- (id)initWithArpStatus:(BOOL)a0 positionIndex:(long long)a1 rapStatus:(BOOL)a2 reliabilityStatus:(BOOL)a3;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2;
- (id)initWithStore:(id)a0 arpStatus:(BOOL)a1 positionIndex:(long long)a2 rapStatus:(BOOL)a3 reliabilityStatus:(BOOL)a4;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1;

@end
