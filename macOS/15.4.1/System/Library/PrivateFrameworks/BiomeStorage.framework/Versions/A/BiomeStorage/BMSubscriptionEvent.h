@class NSString, NSUUID;

@interface BMSubscriptionEvent : NSObject <BMProtoBufWrapper, NSSecureCoding, BMStoreData> {
    unsigned int _dataVersion;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *client;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *useCase;
@property (readonly, nonatomic) BOOL starting;
@property (readonly, nonatomic) NSUUID *bootUUID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDictionary;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithClient:(id)a0 identifier:(id)a1 useCase:(id)a2 starting:(BOOL)a3;
- (id)initWithProto:(id)a0;
- (id)_initWithClient:(id)a0 identifier:(id)a1 useCase:(id)a2 starting:(BOOL)a3 bootUUID:(id)a4;

@end
