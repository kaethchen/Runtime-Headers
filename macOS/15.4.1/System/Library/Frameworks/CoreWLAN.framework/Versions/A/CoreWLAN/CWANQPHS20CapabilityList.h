@interface CWANQPHS20CapabilityList : CWANQPElement <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL supportsHSQueryList;
@property (nonatomic) BOOL supportsHSCapabilityList;
@property (nonatomic) BOOL supportsOperatorFriendlyName;
@property (nonatomic) BOOL supportsWANMetrics;
@property (nonatomic) BOOL supportsConnectionCapability;
@property (nonatomic) BOOL supportsNAIHomeRealmQuery;
@property (nonatomic) BOOL supportsOperatingClassIndication;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNetwork:(id)a0 timestamp:(id)a1 anqpResult:(id)a2;

@end
