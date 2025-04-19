@class NSString;

@interface TITextAnimationCandidate : TIKeyboardCandidateSingle

@property (readonly, nonatomic) NSString *textEffectName;

+ (BOOL)supportsSecureCoding;
+ (int)type;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1 forTextEffectName:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)candidateProperty;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidateWithCandidate:(id)a0 forInput:(id)a1 forTextEffectName:(id)a2;

@end
