@class _EXExtensionIdentity;

@interface _EXRunningLibXPCServiceExtension : _EXRunningExtension {
    void /* unknown type, empty encoding */ $__lazy_storage_$__extensionIdentity;
    void /* unknown type, empty encoding */ connectionHandler;
}

@property (nonatomic, readonly) _EXExtensionIdentity *extensionIdentity;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (int)_startWithArguments:(const char **)a0 count:(int)a1;

@end
