@interface UVCNativeFrame : NSObject {
    unsigned long long _usedDataSize;
    unsigned long long _totalDataSize;
    unsigned long long _signPostId;
    unsigned long long _actualBytesPerRowAllignment;
    unsigned long long _planeCount;
    struct __CVBuffer { } *_pixelBuffer;
    struct __CFDictionary { } *_transportAttachments;
}

@property (readonly) void *buffer;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } presentationDuration;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } presentationTimestamp;
@property (readonly) BOOL discontinous;
@property (readonly) unsigned long long captureTimeInHostClock;
@property struct __CFDictionary { } *transportAttachments;

- (void)dealloc;
- (id)description;
- (BOOL)appendDataToBlockBuffer:(id)a0 bytesPerRowAllignment:(unsigned long long)a1 error:(id *)a2;
- (BOOL)appendNonAlignedDataToBlockBuffer:(id)a0 expectedBytesPerRowAllignment:(unsigned long long)a1 error:(id *)a2;
- (id)initWithBuffer:(void *)a0 presentationTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 presentationDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 discontinous:(BOOL)a3 captureTimeInHostClock:(unsigned long long)a4;
- (unsigned long long)usedDataSize;

@end
