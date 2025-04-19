@class NSString;

@interface AMSUIWebSendSMSAction : AMSUIWebAction

@property (retain) NSString *body;
@property (retain) NSString *countryCode;
@property (retain) NSString *digits;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;
- (id)telephonyAccessPatterns;

@end
