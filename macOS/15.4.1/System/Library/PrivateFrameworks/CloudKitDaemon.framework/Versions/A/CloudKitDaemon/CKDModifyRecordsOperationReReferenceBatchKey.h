@class NSString;

@interface CKDModifyRecordsOperationReReferenceBatchKey : NSObject <NSCopying> {
    NSString *_owner;
}

@property (readonly) long long databaseScope;
@property (readonly) BOOL isClone;
@property (readonly) BOOL isPackageSection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;
- (id)initWithPackageReference:(id)a0 destinationRecordZoneID:(id)a1;

@end
