@class DEExtension;

@interface FPDiagnosticExtensionManager : NSObject {
    DEExtension *fpExtension;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)triggerDiagnosticsFor:(id)a0 persistingAt:(id)a1 completionHandler:(id /* block */)a2;

@end
