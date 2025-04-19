@class NSString, NSArray;

@interface SMTTRPCandidate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *trpCandidateId;
@property (readonly, copy, nonatomic) NSString *requestId;
@property (readonly, copy, nonatomic) NSArray *tcuList;
@property (readonly, copy, nonatomic) NSString *userId;
@property (readonly, nonatomic) BOOL isContinuous;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithTrpCandidateId:(id)a0 tcuList:(id)a1;
- (id)initWithTrpCandidateId:(id)a0 requestId:(id)a1 tcuList:(id)a2;
- (id)initWithTrpCandidateId:(id)a0 requestId:(id)a1 tcuList:(id)a2 userId:(id)a3;

@end
