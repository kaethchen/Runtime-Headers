@class NSString;

@interface CKKSCurrentItemQuery : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifier;
@property (retain) NSString *accessGroup;
@property (retain) NSString *zoneID;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 accessGroup:(id)a1 zoneID:(id)a2;

@end
