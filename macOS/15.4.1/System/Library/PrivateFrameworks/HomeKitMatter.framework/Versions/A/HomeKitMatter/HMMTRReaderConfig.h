@class NSData;

@interface HMMTRReaderConfig : NSObject

@property (retain) NSData *readerPrivateKey;
@property (retain) NSData *readerPublicKeyExternalRepresentation;
@property (retain) NSData *readerGroupIdentifier;
@property (retain) NSData *groupResolvingKey;

- (void).cxx_destruct;

@end
