@class PGMemoryMap, PGMapping, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PGIOSurfaceHostDevice : NSObject {
    unsigned long long _mmioLength;
    id /* block */ _raiseInterrupt;
    PGMemoryMap *_memoryMap;
    PGMapping *_ringMapping;
    PGMapping *_descriptorTableMapping;
    NSObject<OS_dispatch_queue> *_hwQueue;
    NSObject<OS_dispatch_source> *_hwWakeSource;
    unsigned long long _descriptorPageCount;
    unsigned long long _descriptorsPerPage;
    struct IOSurfaceDeviceRingCommand { unsigned int x0; unsigned int x1; int x2; unsigned int x3; } *_ring;
    unsigned long long _ringLength;
    unsigned long long _hostedOnlyAllocated;
    unsigned long long reg_ringBase;
    unsigned long long reg_ringSize;
    unsigned long long reg_descriptorBase;
    unsigned long long reg_ringWrCounter;
    unsigned long long reg_ringRdCounter;
    unsigned long long reg_descEnable;
    struct { unsigned long long *surfaceMappedPages; unsigned long long surfaceMappedPageCount; unsigned long long baseOffset; struct __IOSurface *hostSurface; BOOL readOnly; BOOL hostOnly; } _hostData[8192];
    struct IOSurfaceDescriptorPageTableEntry { unsigned char x0 : 1; unsigned char x1 : 1; unsigned int x2 : 30; } *_descriptorTableEntries;
    struct { union { struct IOSurfaceDeviceDescriptor *page; struct IOSurfaceDeviceDescriptor2 *page_v2; } ; PGMapping *mapping; } _descriptorPages[4096];
}

+ (id)ioSurfaceHostDevice;

- (void)dealloc;
- (void)reset;
- (id)initWithDescriptor:(id)a0;
- (void)setRingSize:(unsigned long long)a0;
- (void)wakeDevice;
- (id)saveState;
- (id)createPlaneDictionaries:(struct IOSurfaceDeviceDescriptor2 { struct IOSurfaceDeviceBaseDescriptor2 { unsigned char x0 : 1; unsigned char x1 : 1; unsigned int x2 : 30; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned short x10; unsigned short x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 6; unsigned char x20[2]; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned long long x26; unsigned int x27[8]; } x0; struct IOSurfaceDevicePlaneDescriptor2 { unsigned int x0[2]; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned short x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned char x18[4]; unsigned char x19[4]; unsigned char x20[4]; unsigned char x21[4]; unsigned char x22[4]; unsigned int x23[7]; } x1[7]; } *)a0;
- (id)createPlaneDictionary:(struct IOSurfaceDevicePlaneDescriptor2 { unsigned int x0[2]; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned short x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned char x18[4]; unsigned char x19[4]; unsigned char x20[4]; unsigned char x21[4]; unsigned char x22[4]; unsigned int x23[7]; } *)a0;
- (id)createSurfaceDictionaryWithDescriptor:(struct IOSurfaceDeviceDescriptor2 { struct IOSurfaceDeviceBaseDescriptor2 { unsigned char x0 : 1; unsigned char x1 : 1; unsigned int x2 : 30; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned short x10; unsigned short x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 6; unsigned char x20[2]; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned long long x26; unsigned int x27[8]; } x0; struct IOSurfaceDevicePlaneDescriptor2 { unsigned int x0[2]; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned short x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned char x18[4]; unsigned char x19[4]; unsigned char x20[4]; unsigned char x21[4]; unsigned char x22[4]; unsigned int x23[7]; } x1[7]; } *)a0 hostData:(struct { unsigned long long *x0; unsigned long long x1; unsigned long long x2; struct __IOSurface *x3; BOOL x4; BOOL x5; } *)a1;
- (int)mapSurface:(unsigned int)a0;
- (unsigned long long)mmioReadAtOffset:(unsigned long long)a0;
- (void)mmioWriteAtOffset:(unsigned long long)a0 value:(unsigned long long)a1;
- (BOOL)resetWithMemoryMap:(id)a0;
- (BOOL)restoreWithSavedState:(id)a0 error:(id *)a1;
- (struct __IOSurface { } *)retainSurfaceWithMappingID:(unsigned long long)a0;
- (void)setDescriptorBase:(unsigned long long)a0;
- (void)setDescriptorEnable:(unsigned long long)a0;
- (void)setRingBase:(unsigned long long)a0;
- (void)teardownSurfaces;
- (int)testSurface:(unsigned int)a0;
- (int)unmapSurface:(unsigned int)a0;

@end
