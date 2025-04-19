@interface RBDecodedFontMetadata : NSObject {
    struct cf_ptr<const __CFString *> { struct __CFString *_p; } _uid;
    struct cf_ptr<const __CFDictionary *> { struct __CFDictionary *_p; } _glyph_map;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
