@class NSString;

@interface SNOspreyChannel : OspreyChannel {
    void /* unknown type, empty encoding */ connectionConfiguration;
    void /* unknown type, empty encoding */ ospreyClientStreamingContext;
    void /* unknown type, empty encoding */ ospreyRequestBuilder;
    void /* unknown type, empty encoding */ ospreyConnectionMetrics;
    void /* unknown type, empty encoding */ connectionMetrics;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ connectionIdentifier;
    void /* unknown type, empty encoding */ configuration;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)bidirectionalStreamingRequestWithMethodName:(id)a0 requestBuilder:(id /* block */)a1 streamingResponseHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (id)initWithURL:(id)a0 configuration:(id)a1;
- (id)initWithURL:(id)a0 configuration:(id)a1 useCache:(BOOL)a2;

@end
