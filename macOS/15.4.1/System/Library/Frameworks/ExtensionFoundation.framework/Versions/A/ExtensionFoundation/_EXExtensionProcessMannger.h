@interface _EXExtensionProcessMannger : NSObject <_EXExtensionProcessObserver> {
    void /* unknown type, empty encoding */ processExtensionMap;
    void /* unknown type, empty encoding */ processExtensionMapLock;
}

- (id)init;
- (void).cxx_destruct;
- (void)processDidInvalidate:(id)a0;

@end
