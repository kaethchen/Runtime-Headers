@class CDPEscrowRecordViability;

@interface CDPEscrowRecordReport : NSObject <CDPInitUnavailable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CDPEscrowRecordViability *deviceViability;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDefaultValues;
- (id)initWithDeviceStatus:(id)a0;
- (id)updatedReportWithRecord:(id)a0;

@end
