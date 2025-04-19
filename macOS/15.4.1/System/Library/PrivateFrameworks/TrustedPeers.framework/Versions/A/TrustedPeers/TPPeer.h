@class TPPeerPermanentInfo, NSString, NSSet, TPPeerStableInfo, TPPeerDynamicInfo;

@interface TPPeer : NSObject

@property (readonly, nonatomic) NSString *peerID;
@property (readonly, nonatomic) TPPeerPermanentInfo *permanentInfo;
@property (readonly, nonatomic) TPPeerStableInfo *stableInfo;
@property (readonly, nonatomic) TPPeerDynamicInfo *dynamicInfo;
@property (readonly, nonatomic) NSSet *trustedPeerIDs;

+ (id)calculateHmacWithHmacKey:(id)a0 permanentInfoData:(id)a1 permanentInfoSig:(id)a2 stableInfoData:(id)a3 stableInfoSig:(id)a4 dynamicInfoData:(id)a5 dynamicInfoSig:(id)a6;
+ (BOOL)verifyHMACWithPermanentInfoData:(id)a0 permanentInfoSig:(id)a1 stableInfoData:(id)a2 stableInfoSig:(id)a3 dynamicInfoData:(id)a4 dynamicInfoSig:(id)a5 hmacKey:(id)a6 hmacSig:(id)a7;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)calculateHmacWithHmacKey:(id)a0;
- (id)initWithPermanentInfo:(id)a0;
- (id)initWithPermanentInfo:(id)a0 stableInfo:(id)a1 dynamicInfo:(id)a2;
- (id)initWithPermanentInfo:(id)a0 stableInfo:(id)a1 dynamicInfo:(id)a2 checkSig:(BOOL)a3 error:(id *)a4;
- (id)initWithPermanentInfo:(id)a0 stableInfo:(id)a1 dynamicInfo:(id)a2 error:(id *)a3;
- (id)peerWithUpdatedDynamicInfo:(id)a0 error:(id *)a1;
- (id)peerWithUpdatedStableInfo:(id)a0 error:(id *)a1;

@end
