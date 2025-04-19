@class NSString, NSURL, CPLScopedIdentifier, NSDate;

@interface CPLRecordComputeState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *fileStorageIdentifier;
@property (copy, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) CPLScopedIdentifier *itemScopedIdentifier;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSString *adjustmentFingerprint;
@property (readonly, nonatomic) NSDate *lastUpdatedDate;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)copyAddingFileURL:(id)a0;
- (id)initWithItemScopedIdentifier:(id)a0 version:(id)a1 fileURL:(id)a2 adjustmentFingerprint:(id)a3 lastUpdatedDate:(id)a4;
- (id)initWithItemScopedIdentifier:(id)a0 fileStorageIdentifier:(id)a1 version:(id)a2 fileURL:(id)a3 adjustmentFingerprint:(id)a4 lastUpdatedDate:(id)a5;

@end
