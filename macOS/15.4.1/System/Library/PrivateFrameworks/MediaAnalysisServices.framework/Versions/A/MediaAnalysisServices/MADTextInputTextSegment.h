@class NSString;

@interface MADTextInputTextSegment : MADTextInputSegment

@property (readonly, nonatomic) NSString *text;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)type;
- (id)initWithText:(id)a0;

@end
