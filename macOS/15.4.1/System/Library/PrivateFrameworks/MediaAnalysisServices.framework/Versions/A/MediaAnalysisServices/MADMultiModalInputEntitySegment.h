@class NSUUID, NSNumber;

@interface MADMultiModalInputEntitySegment : MADMultiModalInputSegment

@property (readonly, nonatomic) NSUUID *entityUUID;
@property (readonly, nonatomic) NSNumber *seed;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)type;
- (id)initWithEntityUUID:(id)a0 seed:(id)a1;

@end
