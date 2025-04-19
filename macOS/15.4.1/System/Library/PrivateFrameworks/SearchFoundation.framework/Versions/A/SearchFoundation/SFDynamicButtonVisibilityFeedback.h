@class NSArray, SFCardSection;

@interface SFDynamicButtonVisibilityFeedback : SFFeedback

@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) SFCardSection *cardSection;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCardSection:(id)a0 buttons:(id)a1;

@end
