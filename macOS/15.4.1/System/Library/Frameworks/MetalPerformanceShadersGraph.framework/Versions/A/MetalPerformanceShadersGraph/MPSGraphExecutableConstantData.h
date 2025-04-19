@class NSURL, NSDictionary;

@interface MPSGraphExecutableConstantData : MPSGraphObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSURL *mpsgraphPackageURL;
@property (retain) NSDictionary *ioSurfaces;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForRequest:(id)a0;
- (void)loadResources:(id)a0;
- (void)extendWithRequest:(id)a0;
- (void)loadIntoResourceManager:(void *)a0;

@end
