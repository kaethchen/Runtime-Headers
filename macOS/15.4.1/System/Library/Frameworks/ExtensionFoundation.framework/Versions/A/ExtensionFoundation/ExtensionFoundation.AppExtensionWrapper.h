@interface ExtensionFoundation.AppExtensionWrapper : _EXExtension {
    void /* unknown type, empty encoding */ _accept;
    void /* unknown type, empty encoding */ _handleConnection;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleConnection:(id)a0;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void)didFinishLaunching;
- (void)willFinishLaunching;

@end
