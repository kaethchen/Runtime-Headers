@class NSString;

@interface _PFExternalReferenceData : NSData <NSCopying, NSMutableCopying> {
    _Atomic id _originalData;
    void *_bytesPtrForStore;
    unsigned long long _bytesLengthForStore;
    void *_bytesPtrForExternalReference;
    unsigned long long _bytesLengthForExternalReference;
    NSString *_externalReferenceLocation;
    NSString *_safeguardLocation;
    id _ubiquitousLocation;
    struct __externalDataFlags { unsigned char _cleanupOnDealloc : 1; unsigned char _dataProtectionLevel : 3; unsigned char _createdByUbiquityImport : 1; unsigned char _reserved : 3; } _externalDataFlags;
    _Atomic BOOL _isStoredExternally;
    _Atomic BOOL _hasMappedData;
    _Atomic BOOL _isStoredUbiquitously;
}

+ (Class)classForKeyedUnarchiver;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopy;
- (unsigned long long)length;
- (const void *)bytes;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (Class)classForCoder;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (id)UUID;
- (BOOL)isEqualToData:(id)a0;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)externalReferenceLocationString;
- (id)initForExternalLocation:(id)a0 safeguardLocation:(id)a1 data:(id)a2 protectionLevel:(int)a3;
- (unsigned long long)_bytesLengthForExternalReference;
- (unsigned long long)_bytesLengthForStore;
- (const void *)_bytesPtrForExternalReference;
- (const void *)_bytesPtrForStore;
- (BOOL)_createdByUbiquityImport;
- (void)_deleteExternalReferenceFromPermanentLocation;
- (const char *)_externalReferenceLocation;
- (void)_moveExternalReferenceToPermanentLocation;
- (id)_originalData;
- (const char *)_safeguardLocation;
- (id)_safeguardLocationString;
- (void)_setBytesForExternalReference:(const void *)a0;
- (void)_writeExternalReferenceToInterimLocation;
- (id)databaseValue;
- (void)doCleanupOnDealloc;
- (BOOL)hasExternalReferenceContent;
- (id)initForUbiquityDictionary:(id)a0 store:(id)a1;
- (id)initWithStoreBytes:(const void *)a0 length:(unsigned long long)a1 externalLocation:(id)a2 safeguardLocation:(id)a3 protectionLevel:(int)a4;
- (id)initWithStoreBytes:(const void *)a0 length:(unsigned long long)a1 externalLocation:(id)a2 safeguardLocation:(id)a3 protectionLevel:(int)a4 ubiquitousLocation:(id)a5;
- (int)preferredProtectionLevel;

@end
