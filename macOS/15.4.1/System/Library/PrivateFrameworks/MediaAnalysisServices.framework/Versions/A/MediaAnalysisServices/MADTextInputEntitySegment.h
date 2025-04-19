@class NSUUID;

@interface MADTextInputEntitySegment : MADTextInputSegment

@property (readonly, nonatomic) NSUUID *entityUUID;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)type;
- (id)initWithEntityUUID:(id)a0;

@end
