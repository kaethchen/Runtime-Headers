@class CCSet, NSArray, NSData, CCDeviceSite;

@interface CCMergeableDeltaFileTransferMessageMetadata : CCPeerToPeerMessage

@property (retain, nonatomic) CCDeviceSite *deviceSite;
@property (retain, nonatomic) CCSet *set;
@property (nonatomic) unsigned long long fileFormatVersion;
@property (retain, nonatomic) NSData *mergeableDeltaMetadataVectors;
@property (retain, nonatomic) NSArray *relayedDeviceSites;

+ (id)mergeableDeltaFileTransferMessageMetadataFromPeerToPeerMessage:(id)a0 deviceSite:(id)a1 set:(id)a2 mergeableDeltaMetadataVectors:(id)a3 fileFormatVersion:(unsigned long long)a4 relayedDeviceSites:(id)a5;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initFromDictionary:(id)a0;

@end
