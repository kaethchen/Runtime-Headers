@class ATXUserNotification, NSUUID, NSString;

@interface ATXUserNotificationLoggingEvent : NSObject <BMStoreData, NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXUserNotification *notification;
@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSUUID *modeUUID;
@property (readonly, nonatomic) unsigned long long deliveryReason;
@property (readonly, nonatomic) unsigned long long deliveryUI;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)json;
- (id)serialize;
- (id)jsonRepresentation;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (BOOL)eventCausesNotificationInactivity;
- (BOOL)eventCausesNotificationNonprominence;
- (id)initFromJSON:(id)a0;
- (id)initFromUserNotification:(id)a0 eventType:(long long)a1 timestamp:(double)a2;
- (id)initFromUserNotification:(id)a0 eventType:(long long)a1 timestamp:(double)a2 deliveryReason:(unsigned long long)a3;
- (id)initFromUserNotification:(id)a0 eventType:(long long)a1 timestamp:(double)a2 deliveryReason:(unsigned long long)a3 deliveryUI:(unsigned long long)a4;
- (id)initFromUserNotification:(id)a0 eventType:(long long)a1 timestamp:(double)a2 deliveryReason:(unsigned long long)a3 deliveryUI:(unsigned long long)a4 modeUUID:(id)a5;
- (BOOL)isDeliveredInPrioritySection;
- (BOOL)isEqualToATXUserNotificationLoggingEvent:(id)a0;
- (BOOL)isReceiveEvent;

@end
