@class NSString;

@interface _BlastDoorLPPasswordsInviteMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *urlParameters;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
