@class CCSet, NSData, CKDistributedTimestampStateVector, CCDeviceSite;

@interface CCFetchMergeableDeltasRequest : CCPeerToPeerMessage

@property (retain, nonatomic) CCDeviceSite *deviceSite;
@property (retain, nonatomic) CCSet *set;
@property (retain, nonatomic) CKDistributedTimestampStateVector *stateVector;
@property (nonatomic) unsigned long long atomBatchVersion;
@property (nonatomic) unsigned short requestOptions;
@property (retain, nonatomic) NSData *peerPublicKey;

+ (id)fetchMergableDeltasRequestFromPeerToPeerMessage:(id)a0 deviceSite:(id)a1 set:(id)a2 stateVector:(id)a3 atomBatchVersion:(unsigned long long)a4 requestOptions:(unsigned short)a5;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initFromDictionary:(id)a0;

@end
