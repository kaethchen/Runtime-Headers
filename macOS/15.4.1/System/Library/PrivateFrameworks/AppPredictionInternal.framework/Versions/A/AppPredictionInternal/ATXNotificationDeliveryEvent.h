@class NSArray, NSString;

@interface ATXNotificationDeliveryEvent : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long deliveryUI;
@property (readonly, nonatomic) NSArray *suggestionUUIDs;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)json;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)jsonRawData;
- (id)initWithDeliveryUI:(unsigned long long)a0 suggestionUUIDs:(id)a1;
- (BOOL)isEqualToATXNotificationDeliveryEvent:(id)a0;

@end
