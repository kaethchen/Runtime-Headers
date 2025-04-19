@interface APCoordinatedProxyUrlRequestBox : APCoordinatedRetryBox

@property (readonly, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 handler:(id /* block */)a1;

@end
