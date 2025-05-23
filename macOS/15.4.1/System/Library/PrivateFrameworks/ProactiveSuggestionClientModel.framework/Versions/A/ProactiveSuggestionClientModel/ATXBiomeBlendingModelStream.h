@class _PASLock, BMStoreConfig;

@interface ATXBiomeBlendingModelStream : NSObject {
    BMStoreConfig *_storeConfig;
    _PASLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)publisherFromStartTime:(double)a0;
- (id)streamIdentifiers;
- (id)deprecatedPublisherFromStartTime:(double)a0;
- (id)initWithStoreConfig:(id)a0;
- (id)publisherFromStartTime:(double)a0 consumerSubType:(unsigned char)a1;
- (id)_innerStreamForConsumerSubType:(unsigned char)a0;
- (id)_innerStreamForStreamId:(id)a0;
- (id)_streamIdForConsumerSubType:(unsigned char)a0;
- (id)_validBlendingStreamConsumerSubTypes;
- (void)donateBlendingModelUICacheUpdate:(id)a0;

@end
