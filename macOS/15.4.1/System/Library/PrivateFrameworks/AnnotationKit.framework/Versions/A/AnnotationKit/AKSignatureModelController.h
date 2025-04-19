@class AKController, NSArray, AKSignature, NSMutableArray;

@interface AKSignatureModelController : NSObject {
    int _nextUID;
    BOOL _signaturesDecryptionAttempted;
    NSMutableArray *_signatures;
}

@property (weak) AKController *controller;
@property (readonly) NSArray *signatures;
@property (retain, nonatomic) AKSignature *selectedSignature;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (id)_createAKSignatureFromItemRef:(id)a0;
- (void)_createAKSignaturesFromPVDummySignatures:(id)a0;
- (BOOL)_createNewKeychainItemWithSignature:(id)a0;
- (void)_decryptSignatures:(id)a0;
- (BOOL)_deleteSignatureFromKeychain:(id)a0;
- (void)_loadSignaturesFromPersistentStorage;
- (void)_migrateLegacySignaturesFromPreviewContainer;
- (void)_saveSignatureToPersistentStorage:(id)a0;
- (void)insertObject:(id)a0 inSignaturesAtIndex:(unsigned long long)a1;
- (void)reloadSignaturesFromSource;
- (void)removeObjectFromSignaturesAtIndex:(unsigned long long)a0;

@end
