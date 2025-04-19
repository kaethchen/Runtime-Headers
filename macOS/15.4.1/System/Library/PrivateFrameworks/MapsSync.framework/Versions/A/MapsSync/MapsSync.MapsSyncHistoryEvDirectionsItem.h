@class NSString;

@interface MapsSync.MapsSyncHistoryEvDirectionsItem : MapsSync.MapsSyncHistoryDirectionsItem {
    void /* unknown type, empty encoding */ _requiredCharge;
    void /* unknown type, empty encoding */ _vehicleIdentifier;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) double requiredCharge;
@property (nonatomic, readonly) NSString *vehicleIdentifier;

- (BOOL)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (Class)managedObjectClass;
- (void)addEditWithBlock:(id /* block */)a0;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
