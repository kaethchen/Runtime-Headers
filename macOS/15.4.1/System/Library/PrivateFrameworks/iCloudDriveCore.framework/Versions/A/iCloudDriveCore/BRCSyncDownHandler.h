@class BRCServerZone, BRCApplyScheduler;

@interface BRCSyncDownHandler : NSObject {
    BRCApplyScheduler *_applyScheduler;
    BRCServerZone *_serverZone;
}

- (void).cxx_destruct;
- (id)initWithServerZone:(id)a0 applyScheduler:(id)a1;
- (void)saveInitialServerZoneData:(id)a0 clientChangeTokenData:(id)a1;
- (void)zoneIsSyncingForTheFirstTime;

@end
