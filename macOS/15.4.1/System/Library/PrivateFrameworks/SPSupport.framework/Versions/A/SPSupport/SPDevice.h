@class NSMutableArray;

@interface SPDevice : NSObject

@property unsigned int entry;
@property (retain) NSMutableArray *children;

- (void)dealloc;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithRegistryEntry:(unsigned int)a0;
- (int)devicePowerState:(const char *)a0 outPowerState:(unsigned int *)a1;
- (id)deviceACPIPath:(const char *)a0;
- (id)anonymousDictionaryRepresentationForVolume:(struct __DADisk { } *)a0;
- (id)dictionaryRepresentationForVolume:(struct __DADisk { } *)a0;

@end
