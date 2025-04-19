@interface ASDTIOA2LegacyStream : ASDTStream {
    char *_ioBuffer;
    unsigned int _ioBufferByteSize;
}

@property (nonatomic) BOOL marked;
@property (readonly, nonatomic) unsigned int userClientID;

- (unsigned int)ioBufferSize;
- (void)setPhysicalFormat:(id)a0;
- (BOOL)changePhysicalFormat:(id)a0;
- (id)physicalFormat;
- (char **)ioBufferRef;
- (BOOL)setupPhysicalFormats:(id)a0;
- (id /* block */)updateClientPositionBlock;
- (void)_buildFormatList;
- (void)_getStartingChannel;
- (void)_mapIOBuffer;
- (void)_pushActiveState;
- (void)_releaseIOBuffer;
- (void)_synchronizeWithHardware;
- (id)initWithIOA2Device:(id)a0 userClientID:(unsigned int)a1 direction:(unsigned int)a2;
- (id)ioa2Device;

@end
