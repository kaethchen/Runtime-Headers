@class NSString, BMIndexSearch, BMStoreEnumerator, BMStoreBookmark, BMAccessClient, BMStreamDatastoreReader;

@interface BPSBiomeStorePublisher : BMBookmarkablePublisher {
    double _startTime;
    double _endTime;
    unsigned long long _maxEvents;
    unsigned long long _lastEventCount;
    BOOL _reversed;
    BMStoreBookmark *_bookmark;
    BMIndexSearch *_indexSearch;
    BMAccessClient *_accessClient;
    BMStreamDatastoreReader *_streamDatastoreReader;
}

@property (retain, nonatomic) BMStoreEnumerator *enumerator;
@property (nonatomic) BOOL finished;
@property (readonly, nonatomic) NSString *streamId;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)completed;
- (id)bookmark;
- (id)reverse;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (id)withLastEvents:(unsigned long long)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (id)_newEnumerator;
- (void)applyBookmark:(id)a0;
- (id)bookmarkableUpstreams;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)initWithStreamDatastoreReader:(id)a0 streamsAccessClient:(id)a1;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1 streamsAccessClient:(id)a2;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1 streamsAccessClient:(id)a2 eventDataClass:(Class)a3;
- (id)startWithSubscriber:(id)a0;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)a0;
- (id)withBookmark:(id)a0;
- (id)withEndTime:(double)a0;
- (id)withIndexSearch:(id)a0;
- (id)withMaxEvents:(unsigned long long)a0;
- (id)withStartTime:(double)a0;

@end
