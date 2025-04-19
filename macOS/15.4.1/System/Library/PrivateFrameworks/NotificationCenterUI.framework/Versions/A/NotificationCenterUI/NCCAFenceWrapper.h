@class CAFenceHandle;

@interface NCCAFenceWrapper : NSObject <NSSecureCoding> {
    CAFenceHandle *_fence;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHandle:(id)a0;
- (void)addToContext:(id)a0;

@end
