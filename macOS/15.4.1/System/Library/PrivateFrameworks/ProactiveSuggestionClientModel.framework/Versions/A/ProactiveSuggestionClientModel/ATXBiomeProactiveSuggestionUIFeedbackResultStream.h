@class NSString, BMStoreStream;

@interface ATXBiomeProactiveSuggestionUIFeedbackResultStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)source;
- (void)sendEvent:(id)a0;
- (id)publisherFromStartTime:(double)a0;
- (id)initWithStoreConfig:(id)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1;

@end
