@class NSUUID;

@interface ATXUserEducationSuggestion : NSObject <ATXUserEducationSuggestion, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;

+ (long long)suggestionType;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0;
- (id)initWithRandomUUID;

@end
