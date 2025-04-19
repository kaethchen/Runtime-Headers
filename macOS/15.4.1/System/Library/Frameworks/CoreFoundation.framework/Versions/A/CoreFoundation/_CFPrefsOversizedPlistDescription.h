@interface _CFPrefsOversizedPlistDescription : NSObject {
    struct __CFDictionary { } *existingValues;
    struct __CFDictionary { } *newValues;
}

- (void)dealloc;
- (id)description;
- (id)_descriptionOfDictionary:(struct __CFDictionary { } *)a0 withKeyRedaction:(BOOL)a1;
- (id)_descriptionWithKeyRedaction:(BOOL)a0;
- (id)redactedDescription;

@end
