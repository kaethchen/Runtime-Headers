@class NSDateInterval, NSString, NSDate;

@interface BMTextInputSessionEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long sessionType;
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
- (id)initWithDateInterval:(id)a0 bundleID:(id)a1 sessionID:(id)a2 sessionType:(unsigned long long)a3;
- (id)initWithDateInterval:(id)a0 bundleID:(id)a1 sessionType:(unsigned long long)a2;
- (id)initWithProto:(id)a0;

@end
