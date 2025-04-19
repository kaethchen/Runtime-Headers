@class NSString, NSArray, NSDictionary;

@interface SFShareSheetConnectionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) NSArray *uniformTypeIdentifiers;
@property (readonly, copy, nonatomic) NSArray *assetIdentifiers;
@property (readonly, copy, nonatomic) NSArray *urls;
@property (readonly, nonatomic) BOOL shouldSuggestFamilyMembers;
@property (readonly, nonatomic) BOOL isSharePlayAvailable;
@property (readonly, nonatomic) BOOL supportsCollaboration;
@property (copy, nonatomic) NSString *hostAppBundleIdentifier;
@property (nonatomic) BOOL shouldNotSuggestPeople;
@property (copy, nonatomic) NSDictionary *sandboxExtensionsByfileURLPath;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionIdentifier:(id)a0 uniformTypeIdentifiers:(id)a1 assetIdentifiers:(id)a2 urls:(id)a3 shouldSuggestFamilyMembers:(BOOL)a4 isSharePlayAvailable:(BOOL)a5;
- (id)initWithSessionIdentifier:(id)a0 uniformTypeIdentifiers:(id)a1 assetIdentifiers:(id)a2 urls:(id)a3 shouldSuggestFamilyMembers:(BOOL)a4 isSharePlayAvailable:(BOOL)a5 supportsCollaboration:(BOOL)a6;

@end
