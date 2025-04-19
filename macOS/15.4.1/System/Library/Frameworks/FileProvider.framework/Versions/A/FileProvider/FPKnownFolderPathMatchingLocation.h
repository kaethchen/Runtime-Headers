@class NSString;

@interface FPKnownFolderPathMatchingLocation : NSFileProviderKnownFolderLocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *parentItemIdentifier;
@property (readonly, copy, nonatomic) NSString *filename;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asPathMatchingLocation;
- (id)initWithParentItemIdentifier:(id)a0 filename:(id)a1;

@end
