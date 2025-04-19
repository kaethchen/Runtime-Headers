@class NSArray, PGGraphMomentNode, NSDateInterval, CLSServiceManager, PGMeaningfulEventProcessorCache, PGMeaningfulEventMatchingCriteria;
@protocol CLSTimeLocationTuple;

@interface PGPublicEventMatchingOptions : NSObject {
    CLSServiceManager *_serviceManager;
}

@property (readonly, nonatomic) id<CLSTimeLocationTuple> timeLocationTuple;
@property (readonly, nonatomic) PGGraphMomentNode *momentNode;
@property (readonly, nonatomic) PGMeaningfulEventProcessorCache *meaningfulEventProcessorCache;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinates;
@property (readonly, nonatomic) NSDateInterval *actualAttendanceDateInterval;
@property (readonly, nonatomic) NSDateInterval *expandedAttendanceDateInterval;
@property (readonly, nonatomic) PGMeaningfulEventMatchingCriteria *matchingCriteria;
@property (readonly, nonatomic) NSArray *temporalClusterEvents;

- (void).cxx_destruct;
- (void)_createAttendanceDateIntervals;
- (id)_readTemporalClusterEvents;
- (id)initWithTimeLocationTuple:(id)a0 momentNode:(id)a1 meaningfulEventProcessorCache:(id)a2 serviceManager:(id)a3;

@end
