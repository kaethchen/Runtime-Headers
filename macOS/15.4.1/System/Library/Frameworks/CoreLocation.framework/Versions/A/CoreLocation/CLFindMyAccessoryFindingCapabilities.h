@interface CLFindMyAccessoryFindingCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned int capabilities;
@property (nonatomic) BOOL supportsFC1ND;
@property (nonatomic) BOOL supportsNBAMMS;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)capabilitiesString;
- (id)initWithSupportsFC1ND:(BOOL)a0 supportsNBAMMS:(BOOL)a1 capabilities:(unsigned int)a2;

@end
