@interface PodcastsFoundation.SiriDonator : NSObject {
    void /* unknown type, empty encoding */ mediaRequestController;
    void /* unknown type, empty encoding */ backgroundTaskManager;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ _donationInProgress;
    void /* unknown type, empty encoding */ podcastsUpdateSubscription;
    void /* unknown type, empty encoding */ _throttleInterval;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithBackgroundTaskManager:(id)a0;
- (void)startDonation;

@end
