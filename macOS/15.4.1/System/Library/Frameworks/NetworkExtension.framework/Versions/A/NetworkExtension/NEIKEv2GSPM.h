@class NSData, _TtC16NetworkExtension26NEIKEv2CryptoKitSPAKE2Plus;

@interface NEIKEv2GSPM : NSObject {
    NSData *_sessionKey;
    NSData *_nextMessage;
    _TtC16NetworkExtension26NEIKEv2CryptoKitSPAKE2Plus *_spake2Handler;
    NSData *_firstLocalMessage;
    NSData *_firstPeerMessage;
}

- (void).cxx_destruct;

@end
