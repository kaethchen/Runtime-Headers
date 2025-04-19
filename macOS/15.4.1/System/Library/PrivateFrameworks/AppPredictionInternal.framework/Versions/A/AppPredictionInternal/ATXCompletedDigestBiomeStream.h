@class ATXUserNotificationDigestBiomeStream;

@interface ATXCompletedDigestBiomeStream : NSObject {
    ATXUserNotificationDigestBiomeStream *_rawDigestEventStream;
}

- (id)init;
- (void).cxx_destruct;
- (id)publisherFromStartTime:(double)a0;
- (id)initFromDigestEventBiomeStream:(id)a0;

@end
