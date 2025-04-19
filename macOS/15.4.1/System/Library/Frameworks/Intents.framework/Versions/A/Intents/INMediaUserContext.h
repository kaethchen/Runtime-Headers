@class NSNumber;

@interface INMediaUserContext : INUserContext

@property long long subscriptionStatus;
@property (copy) NSNumber *numberOfLibraryItems;

+ (BOOL)supportsSecureCoding;
+ (long long)_type;
+ (id)_sharedFormatter;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)safeLibraryItems;

@end
