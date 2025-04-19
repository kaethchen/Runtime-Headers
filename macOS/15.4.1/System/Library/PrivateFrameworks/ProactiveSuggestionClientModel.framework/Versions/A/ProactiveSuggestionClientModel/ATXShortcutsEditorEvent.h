@class NSUUID, NSArray, ATXShortcutsEditorEventMetadata, NSDate, NSString;

@interface ATXShortcutsEditorEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol> {
    double _absoluteDate;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned char consumerSubType;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long eventType;
@property (retain, nonatomic) NSUUID *blendingCacheUUID;
@property (retain, nonatomic) NSArray *suggestionUUIDs;
@property (retain, nonatomic) ATXShortcutsEditorEventMetadata *metadata;
@property (readonly, nonatomic) unsigned char consumerSubTypeForUIStream;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)json;
- (id)jsonDict;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)a0;
- (id)sessionIdentifierForSessionType:(long long)a0 uiCacheConsumerSubType:(unsigned char)a1;
- (id)sessionProcessingOptionsForSessionType:(long long)a0;
- (void)updateUIFeedbackSession:(id)a0 uiCacheConsumerSubType:(unsigned char)a1;
- (id)initWithAbsoluteDate:(double)a0 eventType:(unsigned long long)a1 blendingCacheUUID:(id)a2 suggestionUUIDs:(id)a3 metadata:(id)a4;
- (id)initWithDate:(id)a0 eventType:(unsigned long long)a1 blendingCacheUUID:(id)a2 suggestionUUIDs:(id)a3 metadata:(id)a4;
- (BOOL)isEqualToATXShortcutsEditorEvent:(id)a0;

@end
