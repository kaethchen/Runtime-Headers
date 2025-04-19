@class CCDeviceSite, NSData;

@interface CCFileTransferSessionInitiatedResponse : CCPeerToPeerMessage

@property (retain, nonatomic) CCDeviceSite *deviceSite;
@property (retain, nonatomic) NSData *peerPublicKey;

+ (id)fileTransferSessionInitiatedResponseFromPeerToPeerMessage:(id)a0 deviceSite:(id)a1 peerPublicKey:(id)a2;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initFromDictionary:(id)a0;

@end
