@interface VFXCommonProfileProgramCache : NSObject {
    struct __CFXFXProgram { } *_program;
    struct __CFSet { } *_owners;
}

- (void)dealloc;
- (id)init;

@end
