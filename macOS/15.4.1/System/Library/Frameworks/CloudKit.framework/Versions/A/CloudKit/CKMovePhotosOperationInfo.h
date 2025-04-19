@class NSArray;

@interface CKMovePhotosOperationInfo : CKModifyRecordsOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *moveChanges;
@property (nonatomic) long long sourceDatabaseScope;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
