@class PCIeNANDBootWriter;

@interface PCIeNANDiBootUpdater : MSUBootFirmwareUpdater

@property (readonly, retain) PCIeNANDBootWriter *writer;

+ (id)IOMatchingPropertyTable;

- (void)dealloc;
- (id)initWithIOService:(unsigned int)a0;
- (BOOL)updateBootFirmwareWithError:(id *)a0;

@end
