@class NSString, HomeAttributeValue;

@interface HomeUserTask : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long taskType;
@property (nonatomic) long long attribute;
@property (nonatomic, retain) HomeAttributeValue *value;

- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
