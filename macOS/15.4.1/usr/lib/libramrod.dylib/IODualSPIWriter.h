@class NSData, NSMutableArray;

@interface IODualSPIWriter : IOServiceWriter

@property unsigned int spiDriverConnect;
@property const char *regBuffer;
@property NSData *regData;
@property const union _reg_format_union { struct _reg_format { unsigned int x0; unsigned int x1; struct _fw_storage_description { unsigned int x0; unsigned int x1; } x2[2]; } x0; struct _reg_format_ext { unsigned int x0; unsigned int x1; struct _fw_storage_description { unsigned int x0; unsigned int x1; } x2[2]; struct _fw_storage_description { unsigned int x0; unsigned int x1; } x3[2]; } x1; } *regStruct;
@property unsigned int regSize;
@property NSMutableArray *invalidHeaders;
@property (readonly) BOOL usesAFUH;

- (void)dealloc;
- (id)initWithService:(unsigned int)a0;
- (unsigned int)_maxImageSize;
- (int)_commitHeader:(id)a0 withError:(id *)a1;
- (BOOL)_crossingRegionChangeBoundary;
- (unsigned int)_findFirmwareInfoEntry;
- (id)_getSFRManifestHashForPayload:(id)a0;
- (BOOL)_headerMatchesBootSFRManifestHash:(id)a0;
- (id)_loadRegionLayout:(unsigned int)a0;
- (unsigned int)_maxExtendedRegionSize;
- (BOOL)_usesExtendediBootRegion;
- (int)_writeBytes:(char *)a0 atOffset:(unsigned int)a1 ofLength:(unsigned int)a2 withError:(id *)a3;
- (int)_writeFirmware:(id)a0 toHeader:(id)a1 withError:(id *)a2;
- (int)commitHeaderAtIndex:(unsigned long long)a0 withError:(id *)a1;
- (int)commitPreparedHeaderWithError:(id *)a0;
- (int)eraseBytes:(unsigned int)a0 ofLength:(unsigned int)a1 withError:(id *)a2;
- (id)findHeaders;
- (unsigned long long)findPreparedHeader;
- (BOOL)headerIsInvalid:(id)a0;
- (void)markHeaderAsInvalid:(id)a0;
- (int)openService;
- (id)readDataAtOffset:(unsigned int)a0 ofLength:(unsigned int)a1;
- (int)readDataAtOffset:(unsigned int)a0 ofLength:(unsigned int)a1 intoBuffer:(void *)a2;
- (BOOL)verifyFirmwareAtIndex:(unsigned long long)a0 againstData:(id)a1;
- (BOOL)verifyHeadersAtIndex:(unsigned long long)a0;
- (int)writeData:(id)a0 withError:(id *)a1;
- (int)writeFirstGenerationFirmware:(id)a0 withError:(id *)a1;
- (int)writeNewerGenerationFirmware:(id)a0 withError:(id *)a1;

@end
