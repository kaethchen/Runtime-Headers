@interface Calculate.NumberFormatterObserver : NSObject {
    void /* unknown type, empty encoding */ numberFormatter;
    void /* unknown type, empty encoding */ didChange;
    void /* unknown type, empty encoding */ willChange;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
