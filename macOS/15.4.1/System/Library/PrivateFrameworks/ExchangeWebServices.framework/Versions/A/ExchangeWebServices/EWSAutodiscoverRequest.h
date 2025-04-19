@class NSString, NSURL;

@interface EWSAutodiscoverRequest : NSObject

@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, nonatomic) NSURL *preferredAutodiscoverURL;
@property (readonly, copy, nonatomic) NSString *ewsInternalHostname;
@property (readonly, copy, nonatomic) NSString *ewsExternalHostname;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEmailAddress:(id)a0 user:(id)a1 preferredAutodiscoverURL:(id)a2 ewsInternalHostname:(id)a3 ewsExternalHostname:(id)a4;

@end
