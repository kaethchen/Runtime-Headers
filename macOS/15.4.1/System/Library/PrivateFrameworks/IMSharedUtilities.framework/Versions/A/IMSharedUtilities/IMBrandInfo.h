@class NSString, NSArray;

@interface IMBrandInfo : NSObject <IMAttributableContent> {
    void /* unknown type, empty encoding */ brandURI;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ categories;
    void /* unknown type, empty encoding */ primaryPhoneNumber;
    void /* unknown type, empty encoding */ primaryBrandColorHexString;
    void /* unknown type, empty encoding */ secondaryBrandColorHexString;
    void /* unknown type, empty encoding */ localizedDescription;
    void /* unknown type, empty encoding */ verifiedBy;
    void /* unknown type, empty encoding */ website;
    void /* unknown type, empty encoding */ messageNumber;
    void /* unknown type, empty encoding */ emailAddress;
    void /* unknown type, empty encoding */ address;
    void /* unknown type, empty encoding */ termsAndConditionsURL;
    void /* unknown type, empty encoding */ localizedResponseTime;
    void /* unknown type, empty encoding */ genericCSSTemplateURL;
    void /* unknown type, empty encoding */ brandLogoGuid;
}

@property (nonatomic, readonly) NSString *brandURI;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) NSString *primaryPhoneNumber;
@property (nonatomic, readonly) NSString *primaryBrandColorHexString;
@property (nonatomic, readonly) NSString *secondaryBrandColorHexString;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isVerified;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *verifiedBy;
@property (nonatomic, readonly) NSString *website;
@property (nonatomic, readonly) NSString *messageNumber;
@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSString *termsAndConditionsURL;
@property (nonatomic, readonly) NSString *localizedResponseTime;
@property (nonatomic, readonly) NSString *genericCSSTemplateURL;
@property (nonatomic, copy) NSString *brandLogoGuid;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithBrandURI:(id)a0 name:(id)a1 categories:(id)a2 primaryPhoneNumber:(id)a3 primaryBrandColorHexString:(id)a4 secondaryBrandColorHexString:(id)a5 isVerified:(BOOL)a6 localizedDescription:(id)a7 verifiedBy:(id)a8 website:(id)a9 messageNumber:(id)a10 emailAddress:(id)a11 address:(id)a12 termsAndConditionsURL:(id)a13 localizedResponseTime:(id)a14 genericCSSTemplateURL:(id)a15 brandLogoGuid:(id)a16;
- (id)relayDictionaryRepresentation;

@end
