@class CKRecordID;

@interface TRISizedCKRecordID : NSObject <NSCopying>

@property (readonly, nonatomic) CKRecordID *recordId;
@property (readonly, nonatomic) unsigned long long downloadSize;

+ (id)recordIDWithRecordId:(id)a0 downloadSize:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementDownloadSize:(unsigned long long)a0;
- (id)copyWithReplacementRecordId:(id)a0;
- (id)initWithRecordId:(id)a0 downloadSize:(unsigned long long)a1;
- (BOOL)isEqualToRecordID:(id)a0;

@end
