@class NSData;

@interface HMMTRFetchedReaderConfig : NSObject

@property (retain) NSData *readerPublicKeyExternalRepresentation;
@property (retain) NSData *readerGroupIdentifier;
@property (retain) NSData *groupResolvingKey;

- (void).cxx_destruct;

@end
