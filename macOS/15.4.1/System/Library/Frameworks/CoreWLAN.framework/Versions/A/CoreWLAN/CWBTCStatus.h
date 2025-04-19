@interface CWBTCStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL coexEnabled;
@property (nonatomic) BOOL tdmEnabled;
@property (nonatomic) BOOL hybridEnabled;
@property (nonatomic) long long btAntennaRequestsCount;
@property (nonatomic) long long btAntennaGrantCount;
@property (nonatomic) long long btAntennaGrantDurationMicroseconds;
@property (nonatomic) long long btAbortCount;
@property (nonatomic) BOOL antennaRequestedDueToACL;
@property (nonatomic) BOOL antennaRequestedDueToSCO;
@property (nonatomic) BOOL antennaRequestedDueToeSCO;
@property (nonatomic) BOOL antennaRequestedDueToA2DP;
@property (nonatomic) BOOL antennaRequestedDueToSniff;
@property (nonatomic) BOOL antennaRequestedDueToPageScan;
@property (nonatomic) BOOL antennaRequestedDueToInquiryScan;
@property (nonatomic) BOOL antennaRequestedDueToPage;
@property (nonatomic) BOOL antennaRequestedDueToInquiry;
@property (nonatomic) BOOL antennaRequestedDueToBLE;
@property (nonatomic) BOOL antennaRequestedDueToOther;
@property (nonatomic) long long psnullRetryCountExceededCount;
@property (nonatomic) long long ucodeHighLatencyDetectedCount;

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)update;
- (BOOL)IsEqualToBTCStatus:(id)a0;
- (id)__getSampleDictionary;

@end
