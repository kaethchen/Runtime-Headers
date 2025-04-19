@class NSString;

@interface ISVolumeIcon : ISConcreteIcon

@property (readonly) NSString *kextBundleIdentifier;
@property (readonly) NSString *kextIconName;
@property (readonly) unsigned int typeCode;

+ (BOOL)supportsSecureCoding;
+ (unsigned int)IOKitPort;
+ (id)concreteIconForDeviceIdentifier:(id)a0;
+ (id)concreteIconForVolumeURL:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)resourceFileName;
- (id)resourceURL;
- (id)symbol;
- (id)initWithKextBundleIdentifier:(id)a0 kextIconName:(id)a1 typeCode:(unsigned int)a2;
- (id)makeResourceProvider;

@end
