@interface ASKActiveProcSupport : NSObject {
    void /* function */ *_oldActiveProc;
    void /* function */ *_activeProc;
}

+ (id)sharedActiveProcSupport;

- (id)init;
- (void)setup;
- (void)didFinishLaunching:(id)a0;

@end
