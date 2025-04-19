@class NSArray, NSSet;

@interface _WKWebExtensionWebRequestFilter : NSObject {
    struct optional<WTF::ObjectIdentifierGeneric<WebKit::WebExtensionTabIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>> { union { char __null_state_; struct ObjectIdentifierGeneric<WebKit::WebExtensionTabIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } __val_; } ; BOOL __engaged_; } _tabID;
    struct optional<WTF::ObjectIdentifierGeneric<WebKit::WebExtensionWindowIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>> { union { char __null_state_; struct ObjectIdentifierGeneric<WebKit::WebExtensionWindowIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } __val_; } ; BOOL __engaged_; } _windowID;
    NSArray *_urlPatterns;
    NSSet *_types;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_initializeWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 outErrorMessage:(id *)a1;
- (BOOL)matchesRequestForResourceOfType:(long long)a0 URL:(id)a1 tabID:(double)a2 windowID:(double)a3;

@end
