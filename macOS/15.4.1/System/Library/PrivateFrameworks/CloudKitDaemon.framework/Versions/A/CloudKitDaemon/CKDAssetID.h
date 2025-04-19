@class NSData, CKDPRecordIdentifier, NSNumber;

@interface CKDAssetID : NSObject <NSCopying>

@property (readonly, copy, nonatomic) CKDPRecordIdentifier *recordID;
@property (readonly, copy, nonatomic) NSData *fileSignature;
@property (readonly, copy, nonatomic) NSData *referenceSignature;
@property (readonly, copy, nonatomic) NSNumber *size;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithRecordID:(id)a0 fileSignature:(id)a1 referenceSignature:(id)a2 size:(id)a3;

@end
