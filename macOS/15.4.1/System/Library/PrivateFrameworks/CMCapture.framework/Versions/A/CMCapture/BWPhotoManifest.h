@class NSArray, NSString, NSMutableDictionary;

@interface BWPhotoManifest : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferPtrValueToPhotoDescriptorLock;
    NSMutableDictionary *_bufferPtrValueToPhotoDescriptor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *photoDescriptors;
@property (readonly, nonatomic) NSString *captureRequestIdentifier;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)cannotProcessDepthPhotos;
- (id)descriptorForIdentifier:(id)a0;
- (id)descriptorForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithDescriptors:(id)a0 captureRequestIdentifier:(id)a1;

@end
