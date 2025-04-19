@class NSString, NSURL;

@interface CardDAVAddressBookContainer : CoreDAVContainer

@property (retain, nonatomic) NSString *maxResourceSize;
@property (retain, nonatomic) NSString *maxImageSize;
@property (retain, nonatomic) NSURL *meCardURL;
@property (nonatomic) BOOL isGuardianRestricted;
@property (nonatomic) BOOL isImageUploadRestricted;
@property (readonly, nonatomic) BOOL isAddressBook;
@property (readonly, nonatomic) BOOL isSharedAddressBook;
@property (readonly, nonatomic) BOOL isSearchAddressBook;

+ (id)copyPropertyMappingsForParser;

- (id)description;
- (void).cxx_destruct;
- (void)applyParsedProperties:(id)a0;

@end
