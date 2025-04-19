@class NSString, NSDictionary, NSDate;

@interface WBSPasswordManagerWebsiteMetadataEntry : NSObject <WBSPasswordManagerWebsiteMetadataEntryProtocol>

@property (class, readonly, nonatomic) NSString *keychainAccountName;

@property (readonly, copy, nonatomic) NSString *websiteName;
@property (readonly, nonatomic) NSDate *websiteNameDateLastModified;
@property (readonly, nonatomic) NSDate *websiteNameDateLastRefreshed;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSDictionary *originalBackingDictionary;
@property (readonly, nonatomic) NSString *keychainItemDescription;

- (id)description;
- (void).cxx_destruct;
- (id)initWithKeychainDictionary:(id)a0 forDomain:(id)a1;
- (id)keychainItemLabelForDomain:(id)a0;
- (BOOL)updateWebsiteName:(id)a0;

@end
