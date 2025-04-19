@class PGMemoryMapDescriptor;

@interface PGIOSurfaceHostDeviceDescriptor : NSObject

@property unsigned long long mmioLength;
@property (copy) id /* block */ raiseInterrupt;
@property (retain) PGMemoryMapDescriptor *memoryMapDescriptor;

- (void)dealloc;
- (id)init;

@end
