@protocol SFClientInterfaceProxy;

@interface NWNetworkOfInterestClientProxy : NSObject <SFClientInterface> {
    BOOL _proxyHaveNOIs;
    BOOL _proxyUpdateNOI;
}

@property (weak, nonatomic) id<SFClientInterfaceProxy> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)haveNOIs:(id)a0 tornDown:(BOOL)a1;
- (void)updateNOI:(id)a0 keyPath:(id)a1 change:(id)a2;

@end
