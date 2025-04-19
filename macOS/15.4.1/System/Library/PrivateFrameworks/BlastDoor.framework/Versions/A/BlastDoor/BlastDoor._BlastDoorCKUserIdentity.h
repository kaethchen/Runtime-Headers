@interface BlastDoor._BlastDoorCKUserIdentity : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ userRecordID;
    void /* unknown type, empty encoding */ nameComponents;
    void /* unknown type, empty encoding */ lookupInfo;
    void /* unknown type, empty encoding */ contactIdentifiers;
    void /* unknown type, empty encoding */ publicSharingKey;
    void /* unknown type, empty encoding */ outOfNetworkPrivateKey;
    void /* unknown type, empty encoding */ isCached;
    void /* unknown type, empty encoding */ hasICloudAccount;
    void /* unknown type, empty encoding */ encryptedPersonalInfo;
    void /* unknown type, empty encoding */ publicKeyVersion;
    void /* unknown type, empty encoding */ UserRecordIDKey;
    void /* unknown type, empty encoding */ NameComponentsKey;
    void /* unknown type, empty encoding */ LookupInfoKey;
    void /* unknown type, empty encoding */ ContactIdentifiersKey;
    void /* unknown type, empty encoding */ ProtectionDataKey;
    void /* unknown type, empty encoding */ OONProtectionDataKey;
    void /* unknown type, empty encoding */ IsCachedKey;
    void /* unknown type, empty encoding */ HasICloudAccountKey;
    void /* unknown type, empty encoding */ EncryptedPersonalInfoKey;
    void /* unknown type, empty encoding */ PublicKeyVersionKey;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
