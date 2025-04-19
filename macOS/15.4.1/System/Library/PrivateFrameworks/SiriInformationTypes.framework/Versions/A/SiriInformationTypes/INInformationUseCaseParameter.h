@class INInformationUseCaseParameterValue;

@interface INInformationUseCaseParameter : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) INInformationUseCaseParameterValue *value;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
