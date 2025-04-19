@class ATXHeuristicDevice, PPEventStore;

@interface ATXTripEventsDataSource : NSObject {
    ATXHeuristicDevice *_device;
    PPEventStore *_eventStore;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (id)fetchTripEventsFromStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;
- (void)getLocationForMostRelevantTripInRangeFrom:(id)a0 to:(id)a1 callback:(id /* block */)a2;

@end
