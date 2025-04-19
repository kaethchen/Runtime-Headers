@class NSString;

@interface DevNodeWriter : NSObject

@property int nodeDescriptor;
@property int preferredBlockSize;
@property unsigned int service;
@property (readonly) NSString *devicePath;
@property (readonly) BOOL finished;

- (void)dealloc;
- (id)init;
- (BOOL)isAvailable;
- (id)initWithService:(unsigned int)a0;
- (void)_waitForDeviceNode:(id)a0 withTimeout:(unsigned int)a1;
- (void)_setupFileDescriptor;
- (int)eraseBytes:(unsigned int)a0 ofLength:(unsigned int)a1;
- (id)initWithIOMedia:(unsigned int)a0;
- (id)initWithServiceNamed:(id)a0 parent:(unsigned int)a1;
- (unsigned long long)numberOfBytesRemainingInBlock;
- (int)writeBytes:(const void *)a0 ofLength:(unsigned long long)a1 withError:(id *)a2;
- (int)writeData:(id)a0 withError:(id *)a1;

@end
