@class NSDictionary, ACAccount, NSNumber;

@interface AMSAccountDeviceInfoResult : NSObject

@property (readonly) NSDictionary *rawResult;
@property (readonly) ACAccount *account;
@property (readonly) NSNumber *isBundleOwner;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 responseDictionary:(id)a1;

@end
