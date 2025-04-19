@class NSString, BMStoreStream, BMSource;

@interface ATXUserNotificationDigestBiomeStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
    BMSource *_source;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)source;
- (void)sendEvent:(id)a0;
- (id)publisherFromStartTime:(double)a0;
- (id)initWithStoreConfig:(id)a0;

@end
