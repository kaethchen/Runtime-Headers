@class NSString, NSError;

@interface TSPIOHandlerWriteChannelAdapter : NSObject <TSPComponentWriteChannel> {
    id /* block */ _handler;
    NSError *_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)close;
- (void)setError:(id)a0;
- (void)writeData:(id)a0;
- (id)initWithHandler:(id /* block */)a0;

@end
