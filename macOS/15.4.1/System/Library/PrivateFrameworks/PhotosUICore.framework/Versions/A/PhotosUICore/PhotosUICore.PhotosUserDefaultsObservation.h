@interface PhotosUICore.PhotosUserDefaultsObservation : NSObject {
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ key;
    void /* unknown type, empty encoding */ changeHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
