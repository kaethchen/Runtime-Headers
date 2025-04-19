@class REMContactRepresentation;

@interface REMAlarmContactTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMContactRepresentation *contactRepresentation;

+ (id)cdEntityName;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_deepCopy;
- (id)initWithContactRepresentation:(id)a0;
- (id)initWithObjectID:(id)a0 contactRepresentation:(id)a1;
- (BOOL)isTemporal;

@end
