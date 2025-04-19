@class NSDictionary, TCSmartReplyUserQuestionnaire, TCSmartRepliesResponse;

@interface TCSmartReplyBaseResponseAndUserQuestionnaire : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) TCSmartReplyUserQuestionnaire *questionnaire;
@property (readonly, copy, nonatomic) TCSmartRepliesResponse *response;
@property (readonly, copy) NSDictionary *options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResponse:(id)a0 questionnaire:(id)a1;
- (id)initWithResponse:(id)a0 questionnaire:(id)a1 options:(id)a2;

@end
