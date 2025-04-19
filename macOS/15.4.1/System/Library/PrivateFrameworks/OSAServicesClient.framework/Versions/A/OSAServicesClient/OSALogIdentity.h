@class NSString;

@interface OSALogIdentity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *incidentID;
@property (readonly, nonatomic) NSString *bugType;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIncidentID:(id)a0 bugType:(id)a1;

@end
