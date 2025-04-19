@class NSMutableData;

@interface FSBlockDeviceBufferResource : FSBlockDeviceResource

@property (readonly) NSMutableData *buffer;
@property (readonly) long long headerLength;
@property (readonly) long long footerLength;
@property (readonly) long long size;

+ (BOOL)supportsSecureCoding;
+ (id)bufferFromResource:(id)a0;
+ (id)dynamicCast:(id)a0;

- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)delayedMetadataWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2;
- (id)initBufferFromResource:(id)a0;
- (id)metadataClear:(id)a0 wait:(BOOL)a1;
- (id)metadataFlush;
- (id)metadataPurge:(id)a0;
- (id)metadataReadInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2;
- (id)metadataReadInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 readAheadExtents:(const struct { long long x0; unsigned long long x1; } *)a3 readAheadCount:(long long)a4;
- (id)metadataWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2;
- (void)metadataWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)readInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (unsigned long long)readInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 error:(id *)a3;
- (void)writeFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (unsigned long long)writeFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 error:(id *)a3;

@end
