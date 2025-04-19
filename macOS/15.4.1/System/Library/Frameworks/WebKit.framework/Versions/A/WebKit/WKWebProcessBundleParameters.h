@interface WKWebProcessBundleParameters : NSObject {
    struct RetainPtr<NSMutableDictionary> { void *m_ptr; } _parameters;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id).cxx_construct;
- (id)valueForKey:(id)a0;
- (void)setParameter:(id)a0 forKey:(id)a1;
- (void)setParametersForKeyWithDictionary:(id)a0;

@end
