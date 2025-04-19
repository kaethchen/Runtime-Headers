@class NSURL, DIDeviceHandle, DIBaseParams;

@interface SKDiskImage : NSObject

@property (retain, nonatomic) DIDeviceHandle *deviceHandle;
@property (retain, nonatomic) DIBaseParams *diParams;
@property (readonly, nonatomic) NSURL *imageURL;

+ (id)createBlankAt:(id)a0 params:(id)a1 error:(id *)a2;
+ (id)diskImageConvertFromParamsAt:(id)a0 params:(id)a1 error:(id *)a2;
+ (id)diskImageUnsafeWithURL:(id)a0 params:(id)a1 error:(id *)a2;
+ (id)diskImageWithURL:(id)a0 params:(id)a1 error:(id *)a2;

- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)isAttached;
- (id)retrieveInfoWithParams:(id)a0 error:(id *)a1;
- (BOOL)ejectWithError:(id *)a0;
- (BOOL)retrieveDIInfoWithParams:(id)a0 error:(id *)a1;
- (unsigned long long)diResize:(id)a0 error:(id *)a1;
- (BOOL)attachBeforeResizeWithStdinPass:(BOOL)a0 error:(id *)a1;
- (id)attachNoMountWithError:(id *)a0;
- (id)attachWithError:(id *)a0;
- (id)attachWithParams:(id)a0 error:(id *)a1;
- (id)deduceDiskWithError:(id *)a0;
- (id)diAttachWithParams:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 diParams:(id)a1 error:(id *)a2;
- (id)mount:(id)a0 params:(id)a1 outError:(id *)a2;
- (id)newResizerWithParams:(id)a0 error:(id *)a1;
- (id)newShallowResizerWithParams:(id)a0 error:(id *)a1;
- (void)resize:(id)a0 completionBlock:(id /* block */)a1;
- (id)resizeLimitsInternalWithLimitsParams:(id)a0 error:(id *)a1;
- (id)resizeLimitsShallowInternalWithLimitsParams:(id)a0 error:(id *)a1;
- (id)resizeLimitsWithError:(id *)a0;
- (id)resizeLimitsWithLimitsParams:(id)a0 error:(id *)a1;
- (id)resizeWithParams:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)resizeWithParams:(id)a0 progress:(id)a1 error:(id *)a2;

@end
