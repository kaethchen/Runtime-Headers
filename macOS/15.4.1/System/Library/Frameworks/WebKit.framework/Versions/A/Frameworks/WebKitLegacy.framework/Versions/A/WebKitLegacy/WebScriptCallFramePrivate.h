@class WebScriptObject;

@interface WebScriptCallFramePrivate : NSObject {
    WebScriptObject *globalObject;
    struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } functionName;
    struct JSValue { union EncodedValueDescriptor { long long asInt64; struct JSCell *ptr; struct { int payload; int tag; } asBits; } u; } exceptionValue;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
