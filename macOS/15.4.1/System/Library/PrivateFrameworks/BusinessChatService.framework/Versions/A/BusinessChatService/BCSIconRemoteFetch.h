@protocol BCSCoalesceHelperProtocol;

@interface BCSIconRemoteFetch : NSObject

@property (readonly, retain, nonatomic) id<BCSCoalesceHelperProtocol> coalesceHelper;

- (void).cxx_destruct;
- (void)fetchSquareIconDataForBusinessItem:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (id)initWithCoalesceHelper:(id)a0;

@end
