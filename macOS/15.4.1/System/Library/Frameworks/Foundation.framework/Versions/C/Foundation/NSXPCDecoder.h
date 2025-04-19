@class NSObject, NSXPCInterface, NSXPCConnection;
@protocol OS_xpc_object;

@interface NSXPCDecoder : NSXPCCoder {
    unsigned long long _genericIndex;
    struct { char *data; unsigned long long dataLen; struct __CFDictionary *objectReferences; } _decoder;
    NSXPCConnection *_connection;
    struct *_collections[272];
    struct { unsigned long long offset; int type; } _rootObject;
    Class expectedUnnestedCollectionType;
    BOOL _strictSecureDecodingEnabled;
    BOOL _enforceSubclassesMustBeExplicitlyMentionedWhenDecoded;
    unsigned int _collectionPointer;
    id _allowedClassesList[272];
    long long _allowedClassesIndex;
    NSObject<OS_xpc_object> *_oolObjects;
    NSXPCInterface *_interface;
}

- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (id)allowedClasses;
- (BOOL)allowsKeyedCoding;
- (id)connection;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (long long)decodeInt64ForKey:(id)a0;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (BOOL)decodeBoolForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (long long)decodeIntegerForKey:(id)a0;
- (void)_setConnection:(id)a0;
- (int)__decodeXPCObject:(id)a0 allowingSimpleMessageSend:(BOOL)a1 outInvocation:(id *)a2 outArguments:(id *)a3 outArgumentsMaxCount:(unsigned long long)a4 outMethodSignature:(id *)a5 outSelector:(SEL *)a6 isReply:(BOOL)a7 replySelector:(SEL)a8;
- (void)_validateAllowedXPCType:(struct _xpc_type_s { } *)a0 forKey:(id)a1;
- (id)__decoderInfoForAllowedClassesWarning;
- (id)_currentClassAllowlist;
- (id)_decodeArrayOfObjectsForKey:(id)a0;
- (const char *)_decodeCStringForKey:(id)a0;
- (id)_decodeCollectionOfClass:(Class)a0 allowedClasses:(id)a1 forKey:(id)a2;
- (int)_decodeMessageFromXPCObject:(id)a0 allowingSimpleMessageSend:(BOOL)a1 outInvocation:(id *)a2 outArguments:(id *)a3 outArgumentsMaxCount:(unsigned long long)a4 outMethodSignature:(id *)a5 outSelector:(SEL *)a6;
- (id)_decodeObjectOfClasses:(id)a0 atObject:(struct { unsigned long long x0; int x1; } *)a1;
- (id)_decodeReplyFromXPCObject:(id)a0 forSelector:(SEL)a1;
- (void)_enforceSubclassesMustBeExplicitlyMentionedWhenDecoded;
- (void)_startReadingFromXPCObject:(id)a0;
- (BOOL)_testClass:(Class)a0 isAllowedByAllowList:(id)a1;
- (void)_validateAllowedClass:(Class)a0 forKey:(id)a1 allowingInvocations:(BOOL)a2;
- (void)_validateReusedReference:(id)a0 forKey:(id)a1;
- (id)_xpcObjectForIndex:(long long)a0;
- (void)beginReadingFromXPCObject:(id)a0;
- (BOOL)containsValueForKey:(id)a0;
- (id)decodeArrayOfObjectsOfClasses:(id)a0 forKey:(id)a1;
- (id)decodeDictionaryWithKeysOfClasses:(id)a0 objectsOfClasses:(id)a1 forKey:(id)a2;
- (float)decodeFloatForKey:(id)a0;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)a0;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1 size:(unsigned long long)a2;
- (id)decodeXPCObjectForKey:(id)a0;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { } *)a0 forKey:(id)a1;
- (id)initWithInterface:(id)a0;

@end
