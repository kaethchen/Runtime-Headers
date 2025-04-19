@class NSData;

@interface MSHistoryRideShareItem : MSHistoryItem {
    void /* unknown type, empty encoding */ _endWaypoint;
    void /* unknown type, empty encoding */ _startWaypoint;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSData *endWaypoint;
@property (nonatomic, copy) NSData *startWaypoint;

- (void).cxx_destruct;
- (id)initWithEndWaypoint:(id)a0 startWaypoint:(id)a1;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2;
- (id)initWithStore:(id)a0 endWaypoint:(id)a1 startWaypoint:(id)a2;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1;

@end
