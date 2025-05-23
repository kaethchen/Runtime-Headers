@class NSString;

@interface MADImageSafetyClassificationRequest : MADRequest

@property (copy, nonatomic) NSString *stagedText;
@property (copy, nonatomic) NSString *conversationIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
