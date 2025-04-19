@class NSString;

@interface ABAddressBookSaveOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) ABAddressBookSaveOptions *defaultOptions;
@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL shouldTriggerSync;
@property BOOL shouldUseFileLock;
@property BOOL shouldIgnoreGuardianRestrictions;
@property (copy) NSString *transactionAuthor;

+ (id)none;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
