@class NSString, MRUserIdentity, NSData, NSDictionary;

@interface MRPlaybackQueueParticipant : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *protobufData;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) MRUserIdentity *identity;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)expectedIdentifierForUserIdentity:(id)a0 withRandomData:(id)a1;
+ (void)fetchParticipantsWithRequest:(id)a0 forPlayerPath:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)fetchPlaybackQueueParticipantIdentifierForLocalAccountWithDSID:(id)a0 completion:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 identity:(id)a1;
- (id)initWithProtobuf:(id)a0;
- (id)initWithProtobufData:(id)a0;
- (id)protobufWithEncoding:(long long)a0;

@end
