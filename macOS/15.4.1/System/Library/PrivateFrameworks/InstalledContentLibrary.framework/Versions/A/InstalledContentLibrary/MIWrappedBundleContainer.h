@class NSURL;

@interface MIWrappedBundleContainer : MIRelocatedBundleContainer

@property (readonly, nonatomic) NSURL *wrapperURL;

- (void).cxx_destruct;
- (id)initWithToken:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithWrapperURL:(id)a0 error:(id *)a1;
- (BOOL)saveBundleMetadata:(id)a0 withError:(id *)a1;
- (id)updateAndValidateSinf:(id)a0 error:(id *)a1;
- (BOOL)writeiTunesMetadata:(id)a0 error:(id *)a1;

@end
