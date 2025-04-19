@class NSDictionary;

@interface ATXMailContextResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int mailSenderImportance;
@property (readonly, nonatomic) double importanceConfidenceScore;
@property (readonly, nonatomic) NSDictionary *mailFeatureDictionary;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMailSenderImportance:(int)a0 importanceConfidenceScore:(double)a1 mailFeatureDictionary:(id)a2;

@end
