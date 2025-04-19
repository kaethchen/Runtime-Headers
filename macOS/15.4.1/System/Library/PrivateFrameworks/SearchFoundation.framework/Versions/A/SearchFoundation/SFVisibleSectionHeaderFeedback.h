@class SFResultSection;

@interface SFVisibleSectionHeaderFeedback : SFFeedback

@property (copy, nonatomic) SFResultSection *section;
@property (nonatomic) unsigned long long headerType;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSection:(id)a0 headerType:(unsigned long long)a1;

@end
