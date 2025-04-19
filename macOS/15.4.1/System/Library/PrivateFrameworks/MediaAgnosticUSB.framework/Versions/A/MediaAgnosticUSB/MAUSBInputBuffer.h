@class NSData;

@interface MAUSBInputBuffer : NSObject {
    NSData *_data;
    const char *_ptr;
    unsigned long long _length;
}

@property (readonly) unsigned long long bytesAvailable;
@property (readonly) const void *pointer;
@property (readonly) BOOL uint32Available;
@property (readonly) BOOL uint16Available;

- (id)description;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dequeueData:(unsigned long long)a0;
- (unsigned short)dequeueLittleUInt16;
- (unsigned int)dequeueLittleUInt32;
- (unsigned char)dequeueUInt8;
- (void)incrementPointer:(unsigned long long)a0;
- (unsigned int)peakLittleUInt32;

@end
