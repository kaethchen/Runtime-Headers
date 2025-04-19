@class NSString, NSData, RPCompanionLinkDevice;

@interface W5Peer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RPCompanionLinkDevice *device;
@property (copy, nonatomic) NSString *peerID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *build;
@property (copy, nonatomic) NSString *os;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSData *iconImage;
@property (readonly, nonatomic) long long type;
@property (nonatomic) BOOL nearby;
@property (nonatomic) long long proximity;
@property (nonatomic) long long discoveryFlags;
@property (nonatomic) long long controlFlags;

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)type;
- (BOOL)isEqualToPeer:(id)a0;
- (BOOL)_isOSVersionSupported:(struct { long long x0; long long x1; long long x2; })a0;
- (id)companionLinkDevice;
- (id)initWithCompanionLinkDevice:(id)a0;

@end
