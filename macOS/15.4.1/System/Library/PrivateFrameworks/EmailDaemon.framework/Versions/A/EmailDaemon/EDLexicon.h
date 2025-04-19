@interface EDLexicon : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lexiconLock;
    struct _LXLexicon { } *_lexiconRef;
}

+ (id)current;
+ (id)log;
+ (id)english;

- (void)dealloc;
- (void)_lexiconEnumerateEntries:(struct _LXLexicon { } *)a0 forString:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithLocale:(id)a0 options:(struct __CFDictionary { } *)a1;
- (BOOL)isRealWord:(id)a0;

@end
