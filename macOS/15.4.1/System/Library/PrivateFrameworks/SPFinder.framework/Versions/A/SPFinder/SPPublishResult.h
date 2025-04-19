@class NSUUID, NSData;

@interface SPPublishResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *requestUUID;
@property (copy, nonatomic) NSData *aaaPubKeyHash;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestUUID:(id)a0 aaaPubKeyHash:(id)a1;

@end
