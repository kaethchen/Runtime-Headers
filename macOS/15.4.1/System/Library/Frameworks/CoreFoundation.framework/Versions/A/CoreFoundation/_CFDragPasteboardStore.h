@interface _CFDragPasteboardStore : _CFPasteboardStore {
    struct __CFDictionary { } *_nextUniquingNumbers;
}

+ (id)dragPasteboard;

- (void)dealloc;
- (struct __CFURL { } *)_createUniqueFileURLInDirectory:(struct __CFURL { } *)a0 withBaseName:(struct __CFString { } *)a1 extension:(struct __CFString { } *)a2 locale:(struct __CFLocale { } *)a3;
- (void)_onqueue_clearGenerationSpecificData;
- (void)handleUniquePromiseFile:(id)a0;

@end
