@class NSString;

@interface IKJSAccountInfo : VUIJSObject <VUIJSAccountInfoInterface>

@property (readonly, nonatomic) NSString *DSID;
@property (readonly, nonatomic) NSString *appleId;
@property (readonly, nonatomic) NSString *storefrontId;
@property (readonly, nonatomic) NSString *storefrontLanguage;
@property (readonly, nonatomic) NSString *storefrontCountryCode;

- (id)initWithAppContext:(id)a0;

@end
