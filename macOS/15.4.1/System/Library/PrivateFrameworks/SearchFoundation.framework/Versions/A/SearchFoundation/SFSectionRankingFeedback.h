@class NSArray, SFResultSection;

@interface SFSectionRankingFeedback : SFFeedback <NSCopying>

@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) SFResultSection *section;
@property (nonatomic) unsigned long long localSectionPosition;
@property (nonatomic) double personalizationScore;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResults:(id)a0 section:(id)a1 localSectionPosition:(unsigned long long)a2 personalizationScore:(double)a3;

@end
