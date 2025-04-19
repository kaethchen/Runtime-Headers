@class NSData;

@interface PTClassicKey : NSObject {
    struct { struct { char *data; unsigned long long length; } version; struct { char *data; unsigned long long length; } instanceSerialNumber; struct { char *data; unsigned long long length; } publicKey; struct { char *data; unsigned long long length; } keyNumber; struct { char *data; unsigned long long length; } deviceInfos; struct { char *data; unsigned long long length; } counterLimit; struct { char *data; unsigned long long length; } counterIndex; } _ptKeyBlob;
}

@property (readonly) BOOL isExportedData;
@property (readonly) NSData *keyData;
@property (readonly) unsigned int keyNumber;
@property (readonly) NSData *publicKey;
@property (readonly) NSData *keyIdentifier;
@property (readonly) struct { char *data; unsigned long long length; } keyBlobItem;
@property (readonly) struct { char *data; unsigned long long length; } encryptedWrappedKeyBlobItem;
@property (readonly) NSData *assetACL;
@property (readonly) struct { char *data; unsigned long long length; } assetACLItem;
@property (readonly) NSData *assetACLAttestation;
@property (readonly) struct { char *data; unsigned long long length; } assetACLAttestationItem;
@property (readonly) NSData *accessControlConstraints;
@property (readonly) struct { char *data; unsigned long long length; } accessControlConstraintsItem;

+ (id)withData:(id)a0 error:(id *)a1;
+ (id)_withExportedBlob:(id)a0 error:(id *)a1;
+ (id)_withNativePTData:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;

@end
