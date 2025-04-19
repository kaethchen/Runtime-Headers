@class NSString;

@interface FPKnownFolderExistingLocation : NSFileProviderKnownFolderLocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *itemIdentifier;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExistingItemIdentifier:(id)a0;
- (id)asExistingLocation;

@end
