@class ATXMissedNotificationRankingBiomeStream;

@interface ATXCompletedMissedNotificationRankingStream : NSObject {
    ATXMissedNotificationRankingBiomeStream *_rawMNREventStream;
}

- (id)init;
- (void).cxx_destruct;
- (id)publisherFromStartTime:(double)a0;
- (id)initFromMissedNotificationRankingEventBiomeStream:(id)a0;

@end
