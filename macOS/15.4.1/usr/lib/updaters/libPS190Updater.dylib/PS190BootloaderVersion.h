@interface PS190BootloaderVersion : NSObject

@property (readonly) struct PS190RawBootloaderVersion { unsigned char major; unsigned char minor; } version;

- (id)description;
- (id)initWithRawBootloaderVersion:(const struct PS190RawBootloaderVersion { unsigned char x0; unsigned char x1; } *)a0;

@end
