@class NSUUID, NSString, NSDate;

@interface ATXNotificationSuggestionInteractionEvent : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) long long suggestionType;
@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) NSUUID *suggestionUUID;
@property (readonly, nonatomic) NSDate *eventDate;
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
- (BOOL)eventCausesSuggestionInactivity;
- (id)initWithSuggestionType:(long long)a0 eventType:(long long)a1 suggestionUUID:(id)a2 eventDate:(id)a3;
- (BOOL)isEqualToATXNotificationSuggestionInteractionEvent:(id)a0;
- (id)jsonRawData;

@end
