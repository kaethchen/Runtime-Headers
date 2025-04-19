@class NSString;

@interface HMDMediaSystemHints : HMFObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *mediaSystemHomeUUIDString;
@property (readonly, copy, nonatomic) NSString *mediaSystemUUIDString;
@property (readonly, copy, nonatomic) NSString *peerAccessoryUUIDString;
@property (readonly, copy, nonatomic) NSString *peerAccessoryRoleString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMediaSystemHomeUUIDString:(id)a0 mediaSystemUUIDString:(id)a1 peerAccessoryUUIDString:(id)a2 peerAccessoryRoleString:(id)a3;

@end
