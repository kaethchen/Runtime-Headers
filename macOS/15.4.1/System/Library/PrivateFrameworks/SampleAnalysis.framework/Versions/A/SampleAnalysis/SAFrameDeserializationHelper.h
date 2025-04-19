@class SAFrame;

@interface SAFrameDeserializationHelper : NSObject

@property (readonly) SAFrame *frame;
@property (readonly) const void *buffer;
@property (readonly) unsigned long long bufferLength;

- (void).cxx_destruct;
- (id)initWithFrame:(id)a0 buffer:(const void *)a1 bufferLength:(unsigned long long)a2;

@end
