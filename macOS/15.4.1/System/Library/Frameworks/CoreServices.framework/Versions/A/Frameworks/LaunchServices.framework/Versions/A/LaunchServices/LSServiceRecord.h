@class NSString, LSBundleRecord, NSOrderedSet;

@interface LSServiceRecord : LSRecord {
    LSBundleRecord *_weakDeclaringBundleRecord;
}

@property (readonly) unsigned char _rawFlags;
@property (readonly) LSBundleRecord *_declaringBundleRecord;
@property (readonly, nonatomic) id compatibilityObject;
@property (readonly) NSString *message;
@property (readonly) NSString *portName;
@property (readonly) NSString *localizedMenuItemTitle;
@property (readonly) NSOrderedSet *sendTypeIdentifiers;
@property (readonly) NSOrderedSet *returnTypeIdentifiers;
@property (readonly) NSString *keyEquivalent;
@property (readonly) unsigned long long keyEquivalentModifierMask;
@property (readonly) NSString *userData;
@property (readonly) double timeout;
@property (readonly, getter=isRestricted) BOOL restricted;
@property (readonly) LSBundleRecord *declaringBundleRecord;

+ (BOOL)supportsSecureCoding;
+ (id)_propertyClasses;
+ (id)enumerator;
+ (id)enumeratorForContentsOfPasteboard:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_LSRecord_resolve_keyEquivalent;
- (void)_LSRecord_resolve__declaringBundleRecord;
- (void)_LSRecord_resolve__rawFlags;
- (void)_LSRecord_resolve_keyEquivalentModifierMask;
- (void)_LSRecord_resolve_localizedMenuItemTitle;
- (void)_LSRecord_resolve_message;
- (void)_LSRecord_resolve_portName;
- (void)_LSRecord_resolve_returnTypeIdentifiers;
- (void)_LSRecord_resolve_sendTypeIdentifiers;
- (void)_LSRecord_resolve_timeout;
- (void)_LSRecord_resolve_userData;
- (id)_declaringBundleRecordWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct Service { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; unsigned int x8; unsigned int x9; unsigned char x10; } *)a3;
- (void)_detachFromContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (void)_getKeyEquivalent:(unsigned short *)a0 andModifierFlags:(unsigned long long *)a1 fromString:(id)a2;
- (void)_invokeWithPasteboardNamed:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned char)_rawFlagsWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct Service { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; unsigned int x8; unsigned int x9; unsigned char x10; } *)a3;
- (void)invokeWithContentsOfPasteboard:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)keyEquivalentModifierMaskWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct Service { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; unsigned int x8; unsigned int x9; unsigned char x10; } *)a3;
- (id)keyEquivalentWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct Service { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; unsigned int x8; unsigned int x9; unsigned char x10; } *)a3;
- (id)localizedMenuItemTitleWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct Service { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; unsigned int x8; unsigned int x9; unsigned char x10; } *)a3;
- (id)localizedMenuItemTitleWithPreferredLocalizations:(id)a0;
- (id)messageWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct Service { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; unsigned int x8; unsigned int x9; unsigned char x10; } *)a3;
- (id)portNameWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct Service { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; unsigned int x8; unsigned int x9; unsigned char x10; } *)a3;
- (id)returnTypeIdentifiersWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct Service { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; unsigned int x8; unsigned int x9; unsigned char x10; } *)a3;
- (id)sendTypeIdentifiersWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct Service { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; unsigned int x8; unsigned int x9; unsigned char x10; } *)a3;
- (double)timeoutWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct Service { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; unsigned int x8; unsigned int x9; unsigned char x10; } *)a3;
- (id)userDataWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct Service { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; unsigned int x8; unsigned int x9; unsigned char x10; } *)a3;

@end
