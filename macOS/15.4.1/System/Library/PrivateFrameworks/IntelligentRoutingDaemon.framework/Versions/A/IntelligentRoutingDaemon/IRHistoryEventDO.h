@class IRSystemStateDO, NSString, IREventDO, NSDate, IRMiLoPredictionEventDO;

@interface IRHistoryEventDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *candidateIdentifier;
@property (readonly, nonatomic) IREventDO *event;
@property (readonly, nonatomic) IRMiLoPredictionEventDO *miloPredictionEvent;
@property (readonly, nonatomic) IRSystemStateDO *systemState;
@property (readonly, nonatomic) NSString *sharingPolicy;

+ (id)historyEventDOWithDate:(id)a0 candidateIdentifier:(id)a1 event:(id)a2 miloPredictionEvent:(id)a3 systemState:(id)a4 sharingPolicy:(id)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementSystemState:(id)a0;
- (id)copyWithReplacementCandidateIdentifier:(id)a0;
- (id)copyWithReplacementDate:(id)a0;
- (id)copyWithReplacementEvent:(id)a0;
- (id)copyWithReplacementMiloPredictionEvent:(id)a0;
- (id)copyWithReplacementSharingPolicy:(id)a0;
- (id)initWithDate:(id)a0 candidateIdentifier:(id)a1 event:(id)a2 miloPredictionEvent:(id)a3 systemState:(id)a4 sharingPolicy:(id)a5;
- (BOOL)isEqualToHistoryEventDO:(id)a0;

@end
