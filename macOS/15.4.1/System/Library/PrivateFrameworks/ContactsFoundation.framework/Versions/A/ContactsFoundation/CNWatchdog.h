@class NSString, CNCache;
@protocol CNWatchdog;

@interface CNWatchdog : NSObject <CNWatchdog> {
    CNCache *_events;
}

@property (class, readonly) id<CNWatchdog> defaultWatchdog;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)statusForEvent:(id)a0;
- (void)recordExceptionForEvent:(id)a0;
- (void)setStatus:(unsigned long long)a0 forEvent:(id)a1;

@end
