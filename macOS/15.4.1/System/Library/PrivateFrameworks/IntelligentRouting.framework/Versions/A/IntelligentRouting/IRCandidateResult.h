@class NSString, NSNumber, IRCandidate;

@interface IRCandidateResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *classificationDescription;
@property (retain, nonatomic) NSNumber *sortingHint;
@property (nonatomic) BOOL isCallToAction;
@property (nonatomic) BOOL isLockScreenControl;
@property (nonatomic) BOOL isConservativeFiltered;
@property (readonly, nonatomic) IRCandidate *candidate;
@property (readonly, nonatomic) long long classification;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCandidate:(id)a0 classification:(long long)a1 andClassificationDescription:(id)a2;
- (id)initWithCandidate:(id)a0 classification:(long long)a1 classificationDescription:(id)a2 sortingHint:(id)a3 isCallToAction:(BOOL)a4 isLockScreenControl:(BOOL)a5 isConservativeFiltered:(BOOL)a6;
- (void)setClassification:(long long)a0 withDescription:(id)a1;

@end
