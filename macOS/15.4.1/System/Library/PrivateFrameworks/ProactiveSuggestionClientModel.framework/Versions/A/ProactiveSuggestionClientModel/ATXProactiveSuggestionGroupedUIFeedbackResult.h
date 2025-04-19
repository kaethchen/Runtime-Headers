@class ATXPBProactiveSuggestionGroupedUIFeedbackResult, NSDate;

@interface ATXProactiveSuggestionGroupedUIFeedbackResult : NSObject <NSSecureCoding, ATXProtoBufWrapper> {
    ATXPBProactiveSuggestionGroupedUIFeedbackResult *_proto;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long numSessionsWithEngagedSuggestions;
@property (readonly, nonatomic) unsigned long long numSessionsWithRejectedSuggestions;
@property (readonly, nonatomic) unsigned long long numSessionsWithAbandonedSuggestions;
@property (readonly, nonatomic) unsigned long long numEngagedSuggestions;
@property (readonly, nonatomic) unsigned long long numRejectedSuggestions;
@property (readonly, nonatomic) unsigned long long numAbandonedSuggestions;
@property (nonatomic) BOOL isGroupSessionComplete;
@property (readonly, nonatomic) NSDate *startDateOfFirstSession;
@property (readonly, nonatomic) NSDate *endDateOfLastSession;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDict;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (BOOL)isEqualToATXProactiveSuggestionGroupedUIFeedbackResult:(id)a0;
- (void)updateWithIntermediateSessionResults:(id)a0;

@end
