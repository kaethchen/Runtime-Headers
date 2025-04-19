@interface SASProximitySessionTransport : NSObject

@property (copy) id /* block */ receivedDataBlock;

- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)sendData:(id)a0 response:(id /* block */)a1;

@end
