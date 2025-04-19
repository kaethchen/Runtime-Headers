@class _MRGroupSessionInfoProtobuf, NSString, MRGroupSessionHostInfo;

@interface MRGroupSessionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _MRGroupSessionInfoProtobuf *protobuf;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *effectiveIdentifier;
@property (readonly, nonatomic) NSString *equivalentMediaIdentifier;
@property (readonly, nonatomic) MRGroupSessionHostInfo *hostInfo;
@property (readonly, nonatomic) BOOL isHosted;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 hostInfo:(id)a1 isHosted:(BOOL)a2 equivalentMediaIdentifier:(id)a3 isPlaceholder:(BOOL)a4;
- (id)initWithProtobuf:(id)a0;
- (id)initWithToken:(id)a0 isHosted:(BOOL)a1;
- (id)initWithToken:(id)a0 isHosted:(BOOL)a1 isPlaceholder:(BOOL)a2;

@end
