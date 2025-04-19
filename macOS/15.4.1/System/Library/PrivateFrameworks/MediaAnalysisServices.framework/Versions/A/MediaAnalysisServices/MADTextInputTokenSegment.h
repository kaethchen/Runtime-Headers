@class NSArray;

@interface MADTextInputTokenSegment : MADTextInputSegment

@property (readonly, nonatomic) NSArray *tokenIDs;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)type;
- (id)initWithTokenIDs:(id)a0;

@end
