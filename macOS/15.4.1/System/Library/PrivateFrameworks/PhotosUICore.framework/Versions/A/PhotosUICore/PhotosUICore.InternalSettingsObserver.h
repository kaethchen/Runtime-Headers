@interface PhotosUICore.InternalSettingsObserver : NSObject <PXSettingsKeyObserver> {
    void /* unknown type, empty encoding */ changeHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)settings:(id)a0 changedValueForKey:(id)a1;

@end
