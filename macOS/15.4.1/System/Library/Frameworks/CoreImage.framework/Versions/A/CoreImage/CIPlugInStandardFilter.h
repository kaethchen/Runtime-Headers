@class NSObject, NSString, NSBundle, NSURL, NSMutableDictionary, NSMutableArray, CIKernel;
@protocol OS_dispatch_source;

@interface CIPlugInStandardFilter : CIFilter {
    NSMutableDictionary *_inputs;
    NSMutableArray *_inputKeys;
    NSMutableArray *_outputKeys;
    NSMutableDictionary *_attributes;
    CIKernel *_filterKernel;
    NSObject<OS_dispatch_source> *kernelChangeSource;
}

@property (retain, nonatomic) NSBundle *bundle;
@property (readonly, retain, nonatomic) NSString *kernelFilename;
@property (readonly, retain, nonatomic) NSURL *kernelFileURL;

+ (BOOL)isDebugging;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (id)attributes;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)outputImage;
- (id)inputKeys;
- (id)outputKeys;
- (id)_provideFilterCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDescription:(id)a0 kernelFile:(id)a1 filterBundle:(id)a2;
- (void)loadKernel;
- (BOOL)setupInputs;
- (void)setupWatchingForKernelChanges;

@end
