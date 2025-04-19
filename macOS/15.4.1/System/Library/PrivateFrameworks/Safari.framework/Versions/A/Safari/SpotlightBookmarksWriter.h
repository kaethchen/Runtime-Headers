@class BookmarksController, NSTimer, WBSSiriIntelligenceDonor;

@interface SpotlightBookmarksWriter : NSObject {
    NSTimer *_donationTimer;
}

@property (readonly, weak, nonatomic) BookmarksController *bookmarksController;
@property (readonly, weak, nonatomic) WBSSiriIntelligenceDonor *siriIntelligenceDonor;

+ (id)new;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_donateBookmarksToCoreSpotlight;
- (void)_bookmarksWereChanged:(id)a0;
- (void)_scheduleBookmarksDonationAfterDelay:(double)a0;
- (id)initWithBookmarksController:(id)a0 siriIntelligenceDonor:(id)a1;

@end
