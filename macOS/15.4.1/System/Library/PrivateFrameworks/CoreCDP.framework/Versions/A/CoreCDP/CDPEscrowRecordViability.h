@class NSString;

@interface CDPEscrowRecordViability : NSObject <CDPInitUnavailable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasMachineId;
@property (readonly, nonatomic) BOOL hasRecords;
@property (readonly, nonatomic) unsigned long long localViability;
@property (readonly, nonatomic) NSString *recordId;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) BOOL isForCurrentDevice;
@property (readonly, nonatomic) BOOL recordIsValid;
@property (readonly, nonatomic) unsigned long long recordViability;
@property (readonly, nonatomic) unsigned long long localSecretViability;
@property (readonly, nonatomic) unsigned long long tlkRecoveryViability;
@property (readonly, nonatomic) unsigned long long pcsRecoveryViability;
@property (readonly, nonatomic) unsigned long long sosViability;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDefaultValues;
- (id)initWithRecordPresence:(BOOL)a0 isValid:(BOOL)a1 recordId:(id)a2 buildVersion:(id)a3 isForCurrentDevice:(BOOL)a4 hasMachineId:(BOOL)a5 recordViability:(unsigned long long)a6 localSecretViability:(unsigned long long)a7 tlkRecoveryViability:(unsigned long long)a8 sosViability:(unsigned long long)a9 pcsRecoveryViability:(unsigned long long)a10;

@end
