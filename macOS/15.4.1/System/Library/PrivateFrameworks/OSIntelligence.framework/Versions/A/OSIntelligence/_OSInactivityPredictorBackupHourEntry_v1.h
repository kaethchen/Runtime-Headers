@interface _OSInactivityPredictorBackupHourEntry_v1 : _OSInactivityPredictorBackupHourEntry

@property (nonatomic) int count;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
