@interface PS190AppFirmwareVersion : NSObject

@property (readonly) struct PS190RawAppFirmwareVersion { unsigned char majorField; unsigned char minor; unsigned char sub; } version;

- (id)description;
- (id)initWithRawAppFirmwareVersion:(const struct PS190RawAppFirmwareVersion { unsigned char x0; unsigned char x1; unsigned char x2; } *)a0;

@end
