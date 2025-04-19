@interface FigSandboxRegistrationObjCWrapper : NSObject {
    struct FigOpaqueSandboxRegistration { } *sandboxreg;
}

- (void)dealloc;
- (struct FigOpaqueSandboxRegistration { } *)_sandboxRegistration;
- (id)initWithRegistration:(struct FigOpaqueSandboxRegistration { } *)a0;

@end
