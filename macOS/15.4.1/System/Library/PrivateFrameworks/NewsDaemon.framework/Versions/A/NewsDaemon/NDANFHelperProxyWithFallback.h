@class NDANFHelper, NDANFHelperProxy;

@interface NDANFHelperProxyWithFallback : NSObject <FCANFHelper>

@property (readonly, nonatomic) NDANFHelperProxy *proxyHelper;
@property (readonly, nonatomic) NDANFHelper *inProcessHelper;

- (id)init;
- (void).cxx_destruct;
- (id)manifestFromANFDocumentData:(id)a0;
- (void)popInterest;
- (void)pushInterest;

@end
