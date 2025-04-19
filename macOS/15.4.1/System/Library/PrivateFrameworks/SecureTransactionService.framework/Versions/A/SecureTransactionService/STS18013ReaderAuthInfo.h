@class NSString, NSData, NSURL, NSNumber, STS18013ReaderAnalyticsData;

@interface STS18013ReaderAuthInfo : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *organization;
@property (readonly, nonatomic) NSString *organizationUnit;
@property (readonly, nonatomic) NSData *iconData;
@property (readonly, nonatomic) NSURL *iconURL;
@property (readonly, nonatomic) NSString *iconMediaType;
@property (readonly, nonatomic) NSURL *privacyPolicyURL;
@property (readonly, nonatomic) NSNumber *merchantCategoryCode;
@property (readonly, nonatomic) NSData *certificateData;
@property (readonly, nonatomic) STS18013ReaderAnalyticsData *readerAnalyticsData;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 organization:(id)a1 organizationUnit:(id)a2 iconData:(id)a3 iconURL:(id)a4 iconMediaType:(id)a5 privacyPolicyURL:(id)a6 merchantCategoryCode:(id)a7 certificateData:(id)a8;
- (id)initWithIdentifier:(id)a0 organization:(id)a1 organizationUnit:(id)a2 iconData:(id)a3 iconURL:(id)a4 iconMediaType:(id)a5 privacyPolicyURL:(id)a6 merchantCategoryCode:(id)a7 certificateData:(id)a8 readerAnalyticsData:(id)a9;

@end
