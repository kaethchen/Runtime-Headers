@class NSArray;

@interface WBSTrackedFirstParty : WBSTrackingCapableFirstParty

@property (copy, nonatomic) NSArray *blockedTrackers;
@property (copy, nonatomic) NSArray *preventedTrackers;
@property (readonly, copy, nonatomic) NSArray *trackers;

- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;
- (id)initWithDomain:(id)a0 blockedTrackers:(id)a1 preventedTrackers:(id)a2;

@end
