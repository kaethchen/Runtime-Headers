@class NSString, NSDictionary, BMEntity;

@interface BMEntityRelationshipEvent : NSObject <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *clientId;
@property (readonly, nonatomic) NSString *relationship;
@property (readonly, nonatomic) BMEntity *sourceEntity;
@property (readonly, nonatomic) BMEntity *targetEntity;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)entityFromPBEntity:(id)a0;
- (id)initWithClientId:(id)a0 relationship:(id)a1 sourceEntity:(id)a2 targetEntity:(id)a3 attributes:(id)a4;
- (id)initWithProto:(id)a0;

@end
