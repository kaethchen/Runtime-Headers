@class NSDictionary, NSString, NSBundle;

@interface IMInputSource : InputSource {
    NSString *fIMDisplayName;
    NSString *fComponentBundleID;
    NSBundle *fSourceBundle;
    short fParentScript;
}

@property long long dynamicSourceNameMode;
@property (readonly) NSDictionary *dynamicSourceNameKeys;
@property (readonly) NSString *dynamicSourceName;
@property (readonly) NSString *familyID;

+ (unsigned long long)UIOrderForInputSource:(struct __TSMInputSource { } *)a0 mode:(struct __TSMInputSource { } *)a1;
+ (id)inputSourceWithTSMInputSourceRef:(struct __TSMInputSource { } *)a0 andOwner:(id)a1;

- (void).cxx_destruct;
- (id)bundle;
- (id)bundleID;
- (id)displayName;
- (BOOL)isRemovable;
- (BOOL)remove;
- (long long)UIOrder;
- (BOOL)activateForcibly:(id)a0;
- (id)hudDisplayName;
- (id)initWithTSMInputSourceRef:(struct __TSMInputSource { } *)a0 andOwner:(id)a1;
- (id)menuTitleName;
- (id)newAlternateIcon;
- (id)newPaletteIcon;
- (short)parentScript;
- (void)updateSelfWithDictionary:(id)a0;

@end
