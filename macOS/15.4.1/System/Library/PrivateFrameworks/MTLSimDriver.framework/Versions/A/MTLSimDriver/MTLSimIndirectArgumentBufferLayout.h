@class MTLSimDevice;

@interface MTLSimIndirectArgumentBufferLayout : _MTLIndirectArgumentBufferLayout {
    unsigned int _reference;
    MTLSimDevice *_device;
    BOOL _bufferLayoutMatchesFrontEndLayout;
    unsigned long long _encodedLength;
    unsigned long long _alignment;
}

@property (readonly) unsigned int argumentBufferLayoutRef;

- (void)dealloc;
- (unsigned long long)alignment;
- (unsigned long long)encodedLength;
- (BOOL)bufferLayoutMatchesFrontEndLayout;
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)a0;
- (unsigned int)argumentBufferLayoutRef;
- (id)initWithDevice:(id)a0 reference:(unsigned int)a1 data:(struct { unsigned short x0; short x1; int x2; } *)a2;

@end
