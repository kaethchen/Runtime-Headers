@class NSArray;

@interface AFGetSettingsRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *settings;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createResponse;

@end
