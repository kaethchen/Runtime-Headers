@class NSString, BMStoreStream;

@interface ATXDigestOnboardingAppSelectionLoggingBiomeStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)source;
- (id)publisherFromStartTime:(double)a0;
- (void)deleteAllEvents;
- (id)initWithStoreConfig:(id)a0;

@end
