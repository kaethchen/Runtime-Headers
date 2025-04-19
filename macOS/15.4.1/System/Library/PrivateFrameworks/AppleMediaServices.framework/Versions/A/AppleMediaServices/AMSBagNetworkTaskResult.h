@class NSString, NSDictionary, NSDate;

@interface AMSBagNetworkTaskResult : NSObject

@property (readonly) NSString *accountIdentifier;
@property (readonly) NSDictionary *data;
@property (readonly) NSDate *expirationDate;
@property (readonly) BOOL expired;
@property (readonly) NSString *loadedBagIdentifier;
@property (readonly) NSString *loadedBagPartialIdentifier;
@property (readonly) NSString *storefront;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 expirationDate:(id)a1 loadedBagIdentifier:(id)a2 loadedBagPartialIdentifier:(id)a3 storefront:(id)a4 accountIdentifier:(id)a5;

@end
