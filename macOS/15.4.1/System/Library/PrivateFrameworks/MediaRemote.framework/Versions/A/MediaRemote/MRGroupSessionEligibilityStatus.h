@class MRMediaUserState, NSArray;

@interface MRGroupSessionEligibilityStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isEligibleForHostingGroupSession;
@property (nonatomic) BOOL isEligibleForJoiningGroupSession;
@property (nonatomic) BOOL isEligibleForHostingGroupSessionExcludingAcknowledgements;
@property (nonatomic) BOOL isManateeEnabled;
@property (nonatomic) BOOL idsAccountIsValid;
@property (nonatomic) unsigned long long mediaAccountHostingState;
@property (nonatomic) unsigned long long mediaAccountJoiningState;
@property (retain, nonatomic) MRMediaUserState *currentMediaUserState;
@property (retain, nonatomic) NSArray *mediaUserStates;
@property (nonatomic) unsigned char routeType;
@property (nonatomic) BOOL routeIsValidForHosting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryDescription;
- (id)differenceFrom:(id)a0;

@end
