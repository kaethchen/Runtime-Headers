@class NSArray;

@interface CCSetDiscoveryResponse : CCPeerToPeerMessage

@property (retain, nonatomic) NSArray *discoveredSets;

+ (id)setDiscoveryResponseFromPeerToPeerMessage:(id)a0 discoveredSets:(id)a1;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initFromDictionary:(id)a0;

@end
