@class BUBufferedReadChannel, NSString;

@interface BUBufferedReadChannelHelper : NSObject <BUStreamReadChannel>

@property (weak, nonatomic) BUBufferedReadChannel *bufferedReadChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (id)initWithBufferedReadChannel:(id)a0;
- (void)readWithHandler:(id /* block */)a0;

@end
