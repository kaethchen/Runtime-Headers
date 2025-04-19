@class NSString;

@interface DTSDPDeviceDPCDInfo : NSObject <DTSDisplayPortDeviceInfo, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int oui;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (nonatomic, getter=isBranch) BOOL branch;
@property (nonatomic) unsigned char hardwareMajorVersion;
@property (nonatomic) unsigned char hardwareMinorVersion;
@property (nonatomic) unsigned char firmwareMajorVersion;
@property (nonatomic) unsigned char firmwareMinorVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInfo:(id)a0;

@end
