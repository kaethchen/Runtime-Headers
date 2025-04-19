@class NSString, BMStoreStream;

@interface ATXBiomeClientModelStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)source;
- (id)publisherFromStartTime:(double)a0;
- (id)initWithStoreConfig:(id)a0;

@end
