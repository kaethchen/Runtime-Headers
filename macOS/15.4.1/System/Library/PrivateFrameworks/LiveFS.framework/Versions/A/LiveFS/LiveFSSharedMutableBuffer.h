@class LiveFSMemoryMap;

@interface LiveFSSharedMutableBuffer : NSObject <NSSecureCoding> {
    unsigned long long _vma;
    unsigned long long _capacity;
    unsigned long long _length;
    unsigned int _mp;
    BOOL _isIOWMD;
    LiveFSMemoryMap *_memMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long length;

+ (id)dataWithLength:(unsigned long long)a0;
+ (id)dataWithCapacity:(unsigned long long)a0;
+ (id)newByCopyingPort:(unsigned int)a0;
+ (id)bufferWithCapacity:(unsigned long long)a0;
+ (id)bufferWithLength:(unsigned long long)a0;

- (void)dealloc;
- (const void *)bytes;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void *)mutableBytes;
- (id)initWithLength:(unsigned long long)a0;
- (BOOL)ensureMappedMB:(unsigned long long)a0;
- (BOOL)ensureMapped;
- (id)initWithCapacity:(unsigned long long)a0 andLength:(unsigned long long)a1;
- (id)createDispatchData;
- (void)createMappingAt:(unsigned long long)a0 options:(unsigned int)a1 startingAtOffset:(unsigned long long)a2 forLength:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)createMappingForVMAAt:(unsigned long long)a0 options:(unsigned int)a1 startingAtOffset:(unsigned long long)a2 forLength:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)detachBytes;
- (BOOL)ensureMappedIOMD;
- (id)initWithMachPort:(unsigned int)a0 capacity:(unsigned long long)a1 length:(unsigned long long)a2 wrapsIOWMD:(BOOL)a3;

@end
