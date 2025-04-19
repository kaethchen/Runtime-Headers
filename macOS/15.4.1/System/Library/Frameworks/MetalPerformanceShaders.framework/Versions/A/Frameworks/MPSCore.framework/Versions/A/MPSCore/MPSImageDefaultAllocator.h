@class NSString;

@interface MPSImageDefaultAllocator : NSObject <MPSImageAllocator> {
    int _dealloc_ok;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)imageBatchForCommandBuffer:(id)a0 imageDescriptor:(id)a1 kernel:(id)a2 count:(unsigned long long)a3;
- (id)imageForCommandBuffer:(id)a0 imageDescriptor:(id)a1 kernel:(id)a2;

@end
