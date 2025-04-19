@class CAXContextualAction, CAXPredictionContext, NSString, CAXSuggestion;

@interface CAXContextualActionsFeedbackEvent : NSObject <BMStoreData, ATXProtoBufWrapper, NSSecureCoding>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CAXContextualAction *selectedAction;
@property (copy, nonatomic) CAXSuggestion *suggestion;
@property (copy, nonatomic) CAXPredictionContext *deviceContext;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)json;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)jsonRawData;
- (id)initWithSelectedAction:(id)a0 suggestion:(id)a1 deviceContext:(id)a2 sessionIdentifier:(id)a3;

@end
