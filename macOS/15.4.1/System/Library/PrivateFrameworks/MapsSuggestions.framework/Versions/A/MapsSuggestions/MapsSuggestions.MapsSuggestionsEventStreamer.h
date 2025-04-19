@class NSString, NSArray;

@interface MapsSuggestions.MapsSuggestionsEventStreamer : NSObject <MapsSuggestionsObject> {
    void /* unknown type, empty encoding */ uniqueName;
    void /* unknown type, empty encoding */ notificationName;
    void /* unknown type, empty encoding */ _notifyTimers;
}

@property (nonatomic, copy) NSString *uniqueName;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ lookAheadPeriod;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ pingInterval;
@property (nonatomic, readonly) NSString *notificationName;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ _queue;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _scanTimer;
@property (nonatomic, copy) NSArray *_notifyTimers;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ _delay;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)broadcastEventFrom:(id)a0 to:(id)a1;
- (id)initWithLookAheadPeriod:(double)a0 pingInterval:(double)a1 notificationName:(id)a2 identifyingName:(id)a3;
- (void)invalidateAllTimers;
- (void)rescan;
- (void)scanForStreamableEvents;

@end
