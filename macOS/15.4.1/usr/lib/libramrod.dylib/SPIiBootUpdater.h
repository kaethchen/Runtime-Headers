@class IOServiceWriter;

@interface SPIiBootUpdater : MSUBootFirmwareUpdater

@property (readonly, retain) IOServiceWriter *writer;

+ (id)IOMatchingPropertyTable;

- (void)dealloc;
- (id)initWithIOService:(unsigned int)a0;
- (id)_stitchFirmwareImage;
- (BOOL)updateBootFirmwareWithError:(id *)a0;

@end
