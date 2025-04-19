@class NSString, NSSet, NSURL, NSObject;
@protocol MTLLibrary, OS_dispatch_data;

@interface CIKernelLibrary : NSObject {
    NSObject<OS_dispatch_data> *_data;
    id<MTLLibrary> _library;
    NSSet *_extern_function_names;
    NSSet *_stitchable_function_names;
    BOOL _harvest_for_this_library;
}

@property (readonly) unsigned long long functionCount;
@property (readonly) unsigned long long digest;
@property (readonly) NSURL *url;
@property (readonly) NSString *mtl_source;

+ (void)clearCache;
+ (id)cache;
+ (id)internalLibraryWithName:(id)a0 device:(id)a1;
+ (id)cachedLibraryWithURL:(id)a0 error:(id *)a1;
+ (id)coreImageDylibWithDevice:(id)a0;
+ (id)libraryWithData:(id)a0 error:(id *)a1;
+ (id)libraryWithSource:(id)a0 error:(id *)a1;
+ (id)libraryWithURL:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)functionNames;
- (id)newFunctionWithName:(id)a0;
- (id)functionWithName:(id)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (void)initFunctionNames;
- (id)initWithSource:(id)a0 error:(id *)a1;
- (id)newSpecializedFunctionWithDescriptor:(id)a0;
- (id)newSpecializedFunctionWithName:(id)a0 constants:(void *)a1;

@end
