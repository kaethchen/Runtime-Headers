@interface NSLSNotificationHelperCountedSet : NSLSNotificationHelper {
    struct __CFDictionary { } *_dictionary;
}

- (void)dealloc;
- (BOOL)addEntryAndReturnIfWasEmpty:(id)a0;
- (BOOL)isNonEmpty;
- (BOOL)removeEntryAndReturnIfEmpty:(id)a0;

@end
