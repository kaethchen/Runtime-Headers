@class NSString;

@interface BMReadMessageEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (copy, nonatomic) NSString *idsHandle;
@property (readonly, nonatomic) BOOL markedUnread;
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
- (id)initMarkUnreadWithIDSHandle:(id)a0;
- (id)initWithIDSHandle:(id)a0;
- (id)initWithProto:(id)a0;

@end
