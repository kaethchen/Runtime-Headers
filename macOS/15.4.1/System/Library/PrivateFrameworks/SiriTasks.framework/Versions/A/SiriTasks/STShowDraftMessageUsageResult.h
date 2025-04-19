@interface STShowDraftMessageUsageResult : AFSiriTaskUsageResult

@property (nonatomic) long long resultCode;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_resultDescription;

@end
