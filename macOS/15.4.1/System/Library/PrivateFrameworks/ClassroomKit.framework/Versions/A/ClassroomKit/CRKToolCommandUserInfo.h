@class NSString, NSDictionary;

@interface CRKToolCommandUserInfo : NSObject

@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

- (void).cxx_destruct;
- (id)initWithSessionIdentifier:(id)a0;
- (id)appVersion;

@end
