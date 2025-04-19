@interface QCPatchClassDescription : GFNodeClassDescription {
    struct __CFArray { } *_stateKeysCache;
    struct __CFDictionary { } *_stateKeysCaches;
}

- (void)dealloc;
- (id)stateKeysForIdentifier:(id)a0;

@end
