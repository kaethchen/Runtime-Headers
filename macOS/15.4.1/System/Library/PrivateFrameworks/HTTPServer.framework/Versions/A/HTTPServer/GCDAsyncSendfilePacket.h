@class NSFileHandle;

@interface GCDAsyncSendfilePacket : GCDAsyncWritePacket {
    NSFileHandle *file;
    long long offset;
    long long length;
}

- (void).cxx_destruct;
- (id)initWithSendfile:(id)a0 offset:(long long)a1 length:(long long)a2 timeout:(double)a3 tag:(long long)a4 countBytesWritten:(BOOL)a5;

@end
