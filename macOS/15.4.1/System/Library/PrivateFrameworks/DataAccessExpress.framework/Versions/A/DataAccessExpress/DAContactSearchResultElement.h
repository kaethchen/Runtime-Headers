@class NSString, NSData, NSArray;

@interface DAContactSearchResultElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *workPhone;
@property (copy, nonatomic) NSString *mobilePhone;
@property (copy, nonatomic) NSString *company;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *homePhone;
@property (copy, nonatomic) NSString *alias;
@property (copy, nonatomic) NSString *office;
@property (copy, nonatomic) NSString *serverSource;
@property (copy, nonatomic) NSString *recordName;
@property (copy, nonatomic) NSString *faxPhone;
@property (copy, nonatomic) NSString *department;
@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *zip;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSData *jpegPhoto;
@property (copy, nonatomic) NSString *imService;
@property (copy, nonatomic) NSString *imUsername;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *buildingName;
@property (copy, nonatomic) NSString *appleFloor;
@property (copy, nonatomic) NSString *pagerNumber;
@property (copy, nonatomic) NSString *postalAddress;
@property (copy, nonatomic) NSString *homePostalAddress;
@property (copy, nonatomic) NSString *principalPath;
@property (copy, nonatomic) NSString *preferredUserAddress;
@property (copy, nonatomic) NSArray *cuAddresses;
@property (copy, nonatomic) NSString *iPhone;
@property (copy, nonatomic) NSString *mainPhone;
@property (copy, nonatomic) NSString *workFaxPhone;
@property (retain, nonatomic) NSString *identifierOnServer;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToDAContactSearchResultElement:(id)a0;

@end
