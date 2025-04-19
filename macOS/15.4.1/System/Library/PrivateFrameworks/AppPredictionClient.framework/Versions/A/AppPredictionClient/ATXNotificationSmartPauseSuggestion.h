@class NSDate;

@interface ATXNotificationSmartPauseSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *suggestionExpiration;
@property (nonatomic) double suggestionDuration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)feedbackKeyComponent;
- (id)initWithSuggestionExpiration:(id)a0 pauseDuration:(double)a1;
- (BOOL)isEqualToATXNotificationSmartPauseSuggestion:(id)a0;

@end
