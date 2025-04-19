@class NSString;

@interface BMSocialHighlightContact : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL isSignificant;
@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) BOOL isMe;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithHandle:(id)a0 isSignificant:(BOOL)a1 isMe:(BOOL)a2;
- (id)initWithProto:(id)a0;

@end
