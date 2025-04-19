@class NSURL, NSString;

@interface MUVendorLinkViewModel : NSObject

@property (retain, nonatomic) NSURL *artworkURL;
@property (copy, nonatomic) NSString *providerName;
@property (nonatomic) int linkType;
@property (copy, nonatomic) NSString *appAdamId;
@property (copy, nonatomic) NSString *appShortName;
@property (readonly, copy, nonatomic) NSString *linkTypeString;
@property (copy, nonatomic) NSString *actionName;
@property (readonly, copy, nonatomic) NSString *fallbackSymbolName;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *partnerId;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPartnerId:(id)a0 linkType:(int)a1 artworkURL:(id)a2 providerName:(id)a3 appAdamId:(id)a4 appShortName:(id)a5 actionName:(id)a6 fallbackSymbolName:(id)a7;

@end
