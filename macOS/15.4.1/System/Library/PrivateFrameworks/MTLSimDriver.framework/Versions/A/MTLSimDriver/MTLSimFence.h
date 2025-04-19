@class NSString, MTLSimDevice;
@protocol MTLDevice;

@interface MTLSimFence : _MTLObjectWithLabel <MTLFence, MTLSerializerFence> {
    MTLSimDevice *_device;
    unsigned int _fenceRef;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (unsigned int)fenceRef;
- (id)initWithDevice:(id)a0 fenceRef:(unsigned int)a1;

@end
