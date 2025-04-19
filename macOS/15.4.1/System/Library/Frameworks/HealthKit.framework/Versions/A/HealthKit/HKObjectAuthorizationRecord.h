@class NSUUID;

@interface HKObjectAuthorizationRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *objectUUID;
@property (copy, nonatomic) NSUUID *sourceUUID;
@property (copy, nonatomic) NSUUID *sessionUUID;
@property (nonatomic) long long status;
@property (nonatomic) double modificationDate;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectUUID:(id)a0 sourceUUID:(id)a1 sessionUUID:(id)a2 status:(long long)a3 modificationDate:(double)a4;

@end
