@class CKDPCSData;

@interface CKDPCSMemoryCacheEntry : NSObject

@property (retain, nonatomic) CKDPCSData *pcsData;
@property double lastAccess;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;

@end
