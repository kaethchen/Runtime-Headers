@protocol SHServiceDelegate;

@interface ShazamEvents.ShazamEventsService : NSObject <SHService, ShazamEvents.ShazamEventsServer> {
    void /* unknown type, empty encoding */ liveMusicEventFetcher;
    void /* unknown type, empty encoding */ underlyingServiceDelegate;
}

@property (nonatomic, retain) id<SHServiceDelegate> serviceDelegate;

+ (id)machServiceName;
+ (void)initializeGlobalServiceState;

- (id)init;
- (void).cxx_destruct;
- (void)shutdownService;
- (void)liveMusicEventWithEventID:(id)a0 completionHandler:(id /* block */)a1;
- (void)liveMusicScheduleWithArtistID:(id)a0 startDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)liveMusicScheduleWithVenueID:(id)a0 completionHandler:(id /* block */)a1;

@end
