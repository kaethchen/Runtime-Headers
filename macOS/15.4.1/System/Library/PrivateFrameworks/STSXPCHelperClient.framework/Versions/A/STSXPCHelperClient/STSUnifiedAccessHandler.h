@class STSHelperLibrary, NSString, NSData, NSNumber, STSNFCHandoverHandler;

@interface STSUnifiedAccessHandler : NSObject {
    STSHelperLibrary *_parent;
    NSData *_readerSharedSecret;
    NSData *_endpointIdentifier;
    NSString *_appletIdentifier;
    NSNumber *_protocolVersion;
    STSNFCHandoverHandler *_nfcHandoverHandler;
}

- (void).cxx_destruct;

@end
