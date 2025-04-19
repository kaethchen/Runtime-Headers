@class NSArray;

@interface CCSetDiscoveryRequest : CCPeerToPeerMessage

@property (retain, nonatomic) NSArray *setUUIDsToDiscover;

+ (id)setDiscoveryMessageFromPeerToPeerMessage:(id)a0 setUUIDsToDiscover:(id)a1;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initFromDictionary:(id)a0;

@end
