@interface WBSSpotlightDonationEntityCorrelator : NSObject

- (id)init;
- (id)initIfAvailable;
- (void)correlateBookmarkEntityForItem:(id)a0 withUUIDString:(id)a1;
- (void)correlateHistoryEntityForItem:(id)a0;
- (void)correlateTabEntityForItem:(id)a0;

@end
