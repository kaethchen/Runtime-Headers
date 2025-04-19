@class AVContentKeySpecifier;

@interface AVContentKey : NSObject {
    struct OpaqueFigContentKeyBoss { } *_keyBoss;
    struct OpaqueFigContentKeySpecifier { } *_contentKeySpecifier;
    struct OpaqueFigCPECryptor { } *_cryptor;
}

@property (readonly) AVContentKeySpecifier *contentKeySpecifier;
@property (readonly) long long externalContentProtectionStatus;

+ (id)contentKeyWithSpecifier:(id)a0 cryptor:(struct OpaqueFigCPECryptor { } *)a1 contentKeyBoss:(struct OpaqueFigContentKeyBoss { } *)a2 contentKeySpecifier:(struct OpaqueFigContentKeySpecifier { } *)a3;

- (void)dealloc;
- (struct OpaqueFigCPECryptor { } *)cryptor;
- (struct OpaqueFigContentKeySpecifier { } *)_internalContentKeySpecifier;
- (id)initWithSpecifier:(id)a0 cryptor:(struct OpaqueFigCPECryptor { } *)a1 contentKeyBoss:(struct OpaqueFigContentKeyBoss { } *)a2 contentKeySpecifier:(struct OpaqueFigContentKeySpecifier { } *)a3;
- (void)revoke;

@end
