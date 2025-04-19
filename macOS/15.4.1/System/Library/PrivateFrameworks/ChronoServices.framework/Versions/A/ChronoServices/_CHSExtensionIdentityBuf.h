@class NSString, NSData, AFBBufRef;

@interface _CHSExtensionIdentityBuf : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef *_br;
    const struct ExtensionIdentityBuf { unsigned char x0[1]; } *_ptr;
}

@property (readonly, nonatomic) NSString *tokenString;
@property (readonly, nonatomic) const char *tokenStringAsCString;
@property (readonly, nonatomic) NSData *tokenStringAsData;
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) const char *extensionBundleIdentifierAsCString;
@property (readonly, nonatomic) NSData *extensionBundleIdentifierAsData;
@property (readonly, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, nonatomic) const char *containerBundleIdentifierAsCString;
@property (readonly, nonatomic) NSData *containerBundleIdentifierAsData;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) const char *deviceIdentifierAsCString;
@property (readonly, nonatomic) NSData *deviceIdentifierAsData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initVerifiedRootObjectFromData:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0 changes:(id)a1;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(BOOL)a1;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(BOOL)a1 maxDepth:(unsigned int)a2 maxTables:(unsigned int)a3;
- (id)initWithBufRef:(id)a0 cppPointer:(const struct ExtensionIdentityBuf { unsigned char x0[1]; } *)a1;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;
- (BOOL)verifyUTF8Fields;

@end
