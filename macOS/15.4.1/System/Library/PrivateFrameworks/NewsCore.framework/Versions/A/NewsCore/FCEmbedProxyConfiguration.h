@class NSString;

@interface FCEmbedProxyConfiguration : NSObject

@property (readonly, nonatomic) NSString *proxyHost;
@property (readonly, nonatomic) NSString *proxyAutoConfig;
@property (readonly, nonatomic) BOOL usePrivateRelay;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
