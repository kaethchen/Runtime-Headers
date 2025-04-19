@class NSString, NSBundle;

@interface OldIMInputSource : InputSource {
    NSString *fComponentBundleID;
    NSBundle *fSourceBundle;
}

+ (id)inputSourceWithTSMInputSourceRef:(struct __TSMInputSource { } *)a0 andOwner:(id)a1;

- (void).cxx_destruct;
- (id)bundle;
- (id)bundleID;
- (id)initWithTSMInputSourceRef:(struct __TSMInputSource { } *)a0 andOwner:(id)a1;

@end
