@class CTLazuliChatBotOrgName, CTLazuliChatBotCategoryList, CTLazuliChatBotMediaList, CTLazuliChatBotWebResources, CTLazuliChatBotOrgDescription, CTLazuliChatBotCommunicationAddress;

@interface CTLazuliChatBotOrgDetails : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTLazuliChatBotCommunicationAddress *communicationAddress;
@property (retain, nonatomic) CTLazuliChatBotMediaList *mediaList;
@property (retain, nonatomic) CTLazuliChatBotOrgName *orgName;
@property (retain, nonatomic) CTLazuliChatBotOrgDescription *orgDescription;
@property (retain, nonatomic) CTLazuliChatBotCategoryList *categoryList;
@property (retain, nonatomic) CTLazuliChatBotWebResources *webResources;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliChatBotOrgDetails:(id)a0;

@end
