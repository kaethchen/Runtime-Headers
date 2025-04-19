@class NSSet;

@interface IRCandidatesContainerDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *candidates;

+ (id)candidatesContainerDOWithCandidates:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCandidates:(id)a0;
- (BOOL)isEqualToCandidatesContainerDO:(id)a0;
- (id)airplayOrUnknownCandidates;
- (id)candidateForCandidateIdentifier:(id)a0;
- (id)candidateNameForCandidateIdentifier:(id)a0;
- (id)copyWithReplacementCandidates:(id)a0;
- (id)exportAsDictionary;

@end
