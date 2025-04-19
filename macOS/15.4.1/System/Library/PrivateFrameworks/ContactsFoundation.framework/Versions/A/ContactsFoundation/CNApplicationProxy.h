@class NSString, NSArray;

@interface CNApplicationProxy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSArray *activityTypes;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 teamIdentifier:(id)a1 localizedName:(id)a2 activityTypes:(id)a3;
- (id)initWithLSApplicationProxy:(id)a0;
- (id)initWithLSApplicationRecord:(id)a0;

@end
