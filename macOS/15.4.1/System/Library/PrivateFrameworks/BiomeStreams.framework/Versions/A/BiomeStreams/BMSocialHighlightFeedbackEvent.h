@class NSString, BMRankableSocialHighlight, NSDate;

@interface BMSocialHighlightFeedbackEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) unsigned long long feedbackType;
@property (readonly, nonatomic) NSDate *feedbackCreationDate;
@property (readonly, nonatomic) BMRankableSocialHighlight *highlight;
@property (readonly, nonatomic) NSString *clientVariant;
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
- (id)initWithClientIdentifier:(id)a0 feedbackType:(unsigned long long)a1 feedbackCreationDate:(id)a2 highlight:(id)a3 clientVariant:(id)a4;
- (unsigned long long)_feedbackTypeForProtoType:(int)a0;
- (int)_protoFeedbackType;
- (id)initWithClientIdentifier:(id)a0 feedbackType:(unsigned long long)a1 feedbackCreationDate:(id)a2 highlight:(id)a3;
- (id)initWithProto:(id)a0;

@end
