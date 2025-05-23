@class NSString, NSUUID;

@interface AFAudioDeviceInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *route;
@property (readonly, nonatomic) BOOL isRemoteDevice;
@property (readonly, copy, nonatomic) NSUUID *deviceUID;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithRoute:(id)a0 isRemoteDevice:(BOOL)a1 deviceUID:(id)a2;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
