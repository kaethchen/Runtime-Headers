@class NSString, LSApplicationRecord, LSExtensionPoint, LSPropertyList;

@interface LSExtensionPointRecord : LSRecord

@property (class, retain) LSExtensionPointRecord *extensionPointRecordForCurrentProcess;
@property (class, readonly) BOOL isCurrentProcessAnApplicationExtension;
@property (class, readonly, nonatomic) NSString *identifierForCurrentProcess;

@property (readonly) LSApplicationRecord *_EX_parentAppRecord;
@property (readonly) LSPropertyList *SDKDictionary;
@property (readonly, nonatomic) LSExtensionPoint *compatibilityObject;
@property (readonly) NSString *identifier;
@property (readonly) NSString *name;
@property (readonly) NSString *version;
@property (readonly) unsigned int platform;
@property (readonly) LSApplicationRecord *parentAppRecord;
@property (readonly) unsigned int extensionPointType;
@property (readonly) unsigned int TCCPolicy;

+ (BOOL)supportsSecureCoding;
+ (id)_propertyClasses;
+ (id)enumerator;
+ (id)enumeratorForExtensionPointIdentifier:(id)a0;
+ (id)enumeratorWithParentApplicationRecord:(id)a0;

- (id)_EX_initWithIdentifier:(id)a0 platform:(unsigned int)a1 parentAppRecord:(id)a2 error:(id *)a3;
- (id)SDKDictionaryWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSExtensionPointData { int x0; unsigned int x1; struct LSVersionNumber { unsigned char x0[32]; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned long long x10; } *)a3;
- (void)_LSRecord_resolve_SDKDictionary;
- (unsigned int)TCCPolicyWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSExtensionPointData { int x0; unsigned int x1; struct LSVersionNumber { unsigned char x0[32]; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned long long x10; } *)a3;
- (void)_LSRecord_resolve_TCCPolicy;
- (void)_LSRecord_resolve_extensionPointType;
- (void)_LSRecord_resolve_identifier;
- (void)_LSRecord_resolve_name;
- (void)_LSRecord_resolve_parentAppRecord;
- (void)_LSRecord_resolve_platform;
- (void)_LSRecord_resolve_version;
- (id)_compatibilityObjectWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (void)_detachFromContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (unsigned int)extensionPointTypeWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSExtensionPointData { int x0; unsigned int x1; struct LSVersionNumber { unsigned char x0[32]; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned long long x10; } *)a3;
- (id)identifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSExtensionPointData { int x0; unsigned int x1; struct LSVersionNumber { unsigned char x0[32]; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned long long x10; } *)a3;
- (id)initWithIdentifier:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 parentAppRecord:(id)a1 error:(id *)a2;
- (id)initWithIdentifier:(id)a0 platform:(unsigned int)a1 error:(id *)a2;
- (id)initWithIdentifier:(id)a0 platform:(unsigned int)a1 parentAppRecord:(id)a2 error:(id *)a3;
- (id)nameWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSExtensionPointData { int x0; unsigned int x1; struct LSVersionNumber { unsigned char x0[32]; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned long long x10; } *)a3;
- (id)parentAppRecordWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSExtensionPointData { int x0; unsigned int x1; struct LSVersionNumber { unsigned char x0[32]; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned long long x10; } *)a3;
- (unsigned int)platformWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSExtensionPointData { int x0; unsigned int x1; struct LSVersionNumber { unsigned char x0[32]; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned long long x10; } *)a3;
- (id)versionWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSExtensionPointData { int x0; unsigned int x1; struct LSVersionNumber { unsigned char x0[32]; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned long long x10; } *)a3;

@end
