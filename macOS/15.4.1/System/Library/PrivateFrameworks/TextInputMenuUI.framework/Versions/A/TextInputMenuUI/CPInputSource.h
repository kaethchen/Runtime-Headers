@class NSString, NSBundle;

@interface CPInputSource : InputSource {
    NSString *fShowPalatteString;
    NSString *fHidePalatteString;
    NSString *fComponentBundleID;
    NSBundle *fSourceBundle;
}

+ (id)inputSourceWithTSMInputSourceRef:(struct __TSMInputSource { } *)a0 andOwner:(id)a1;

- (void).cxx_destruct;
- (id)bundle;
- (id)bundleID;
- (id)displayName;
- (BOOL)activate:(id)a0;
- (BOOL)isSelected;
- (id)newIcon;
- (id)newOriginalIcon;
- (BOOL)activateForcibly:(id)a0;
- (BOOL)activateForciblyWithMethod:(long long)a0 sender:(id)a1;
- (BOOL)activateFromMenuItem:(id)a0;
- (id)initWithTSMInputSourceRef:(struct __TSMInputSource { } *)a0 andOwner:(id)a1;
- (id)newAlternateIcon;
- (id)newPaletteIcon;

@end
