@class NSError, NSData, NSArray, NEIKEv2KEMProtocol, NEIKEv2IKESA, NEIKEv2NotifyPayload, NEIKEv2ESPSPI, NEIKEv2KeyExchangeHandler, NEIKEv2ChildSAProposal, NSMutableArray, NEIKEv2ChildSAConfiguration;

@interface NEIKEv2ChildSA : NSObject {
    BOOL _shouldSendStateUpdate;
    BOOL _isInitiator;
    BOOL _sequencePerTrafficClassSupported;
    unsigned short _incomingDatabaseReqID;
    unsigned short _outgoingDatabaseReqID;
    unsigned int _childID;
    NEIKEv2IKESA *_ikeSA;
    unsigned long long _state;
    NSError *_error;
    NEIKEv2ChildSAConfiguration *_configuration;
    NEIKEv2ChildSAProposal *_chosenProposal;
    NSArray *_localTrafficSelectors;
    NSArray *_remoteTrafficSelectors;
    NSData *_localNonce;
    NSData *_remoteNonce;
    NEIKEv2KEMProtocol *_remotePreferredKEMProtocol;
    NSData *_remoteKeyExchangeData;
    NEIKEv2KeyExchangeHandler *_currentKEHandler;
    NSData *_primarySharedSecret;
    NEIKEv2NotifyPayload *_additionalKENotify;
    NSMutableArray *_followupSharedSecrets;
    NSData *_incomingEncryptionKey;
    NSData *_incomingIntegrityKey;
    NSData *_outgoingEncryptionKey;
    NSData *_outgoingIntegrityKey;
    NSArray *_rekeyRequestProposals;
    NEIKEv2ChildSAProposal *_rekeyResponseProposal;
    NEIKEv2ESPSPI *_rekeyedSPI;
    NEIKEv2ESPSPI *_rekeyedRemoteSPI;
    NSArray *_internalProposalsWithoutKEM;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;

@end
