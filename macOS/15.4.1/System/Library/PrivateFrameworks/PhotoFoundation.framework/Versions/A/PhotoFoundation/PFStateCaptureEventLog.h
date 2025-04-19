@class NSArray, NSMutableArray;

@interface PFStateCaptureEventLog : NSObject {
    Class _eventClass;
    unsigned long long _maxEvents;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_lock_events;
    long long _lock_headIndex;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSArray *eventDescriptions;

- (void).cxx_destruct;
- (id)addEvent;
- (id)initWithEventClass:(Class)a0 maxEvents:(unsigned long long)a1;

@end
