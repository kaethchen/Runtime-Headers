@interface CryptexRemoteServiceNonceAttr : NSObject

@property (nonatomic) unsigned long long image_type;
@property (nonatomic) unsigned long long persistence;
@property (nonatomic) unsigned int ndom_handle;

- (id)init;
- (unsigned long long)getNonceDomainIndex;

@end
