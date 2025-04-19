@class NSArray, NSString, ATXActivity, NSDate;

@interface ATXActivitySuggestionFeedbackEvent : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) ATXActivity *activity;
@property (readonly, nonatomic) NSArray *acceptedTriggers;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) unsigned long long suggestionType;
@property (readonly, nonatomic) unsigned long long location;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)json;
- (id)jsonDict;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)activityDescription;
- (id)initWithEventDate:(id)a0 activity:(id)a1 acceptedTriggers:(id)a2 eventType:(unsigned long long)a3 suggestionType:(unsigned long long)a4 location:(unsigned long long)a5;
- (BOOL)isEqualToATXActivitySuggestionFeedbackEvent:(id)a0;

@end
