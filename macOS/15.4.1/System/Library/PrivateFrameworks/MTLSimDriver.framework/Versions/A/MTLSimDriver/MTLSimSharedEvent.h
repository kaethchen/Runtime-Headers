@class NSString, IOSurfaceSharedEvent, MTLSimDevice;
@protocol MTLDevice;

@interface MTLSimSharedEvent : _MTLObjectWithLabel <MTLSimEvent, MTLSharedEventSPI> {
    MTLSimDevice *_device;
    unsigned int _reference;
    unsigned long long _signaledValue;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IOSurfaceSharedEvent *IOSurfaceSharedEvent;
@property (readonly) BOOL supportsRollback;
@property unsigned long long signaledValue;

- (void)dealloc;
- (id)newSharedEventHandle;
- (void)notifyListener:(id)a0 atValue:(unsigned long long)a1 block:(id /* block */)a2;
- (void)setSignaledValue:(unsigned long long)a0;
- (unsigned long long)signaledValue;
- (BOOL)waitUntilSignaledValue:(unsigned long long)a0 timeoutMS:(unsigned long long)a1;
- (unsigned int)eventRef;
- (id)initWithDevice:(id)a0 reference:(unsigned int)a1;

@end
