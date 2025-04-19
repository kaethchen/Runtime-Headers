@class NSDictionary, NSString, NSDate;

@interface AMSBagDataSourceLoadResult : NSObject

@property (readonly) NSDictionary *data;
@property (readonly) NSDate *expirationDate;
@property (readonly) NSString *loadedBagIdentifier;
@property (readonly) NSString *loadedBagPartialIdentifier;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 expirationDate:(id)a1 loadedBagIdentifier:(id)a2 loadedBagPartialIdentifier:(id)a3;

@end
