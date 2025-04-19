@interface PS190InitFirmwareUpdateCommand : PS190Command

- (id)description;
- (id)initWithSubcommand:(unsigned char)a0 version:(const struct PS190RawAppFirmwareVersion { unsigned char x0; unsigned char x1; unsigned char x2; } *)a1;

@end
