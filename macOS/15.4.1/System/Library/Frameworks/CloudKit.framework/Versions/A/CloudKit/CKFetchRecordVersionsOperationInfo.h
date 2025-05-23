@class NSArray, NSString;

@interface CKFetchRecordVersionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSArray *desiredKeys;
@property (retain, nonatomic) NSString *minimumVersionETag;
@property (nonatomic) BOOL shouldFetchAssetContent;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
