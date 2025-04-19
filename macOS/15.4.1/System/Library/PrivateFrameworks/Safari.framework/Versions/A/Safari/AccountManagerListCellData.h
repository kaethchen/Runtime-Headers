@class NSImage, NSString;

@interface AccountManagerListCellData : NSObject

@property (retain, nonatomic) NSImage *iconImage;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *domainForIcon;
@property (readonly, copy, nonatomic) NSString *monogramCharacter;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *issueTypesDescription;

+ (id)cellDataForPasswordWarning:(id)a0;
+ (id)cellDataForSavedAccount:(id)a0;

- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 domainForIcon:(id)a1 monogramCharacter:(id)a2 username:(id)a3 issueTypesDescription:(id)a4;

@end
