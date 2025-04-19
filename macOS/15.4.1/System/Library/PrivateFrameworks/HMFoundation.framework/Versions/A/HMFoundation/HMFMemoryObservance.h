@class NSSet, NSDate;

@interface HMFMemoryObservance : HMFObject

@property (readonly) double debounceInterval;
@property (readonly, copy) NSSet *events;
@property (copy) NSDate *lastUpdateDate;

- (void).cxx_destruct;
- (id)initWithDebounceInterval:(double)a0 events:(id)a1;

@end
