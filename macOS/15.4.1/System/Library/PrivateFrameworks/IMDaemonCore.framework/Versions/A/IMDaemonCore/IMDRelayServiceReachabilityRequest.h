@class NSArray, NSString, IMServiceReachabilityContext;

@interface IMDRelayServiceReachabilityRequest : NSObject

@property (retain, nonatomic) NSArray *handles;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) IMServiceReachabilityContext *context;

+ (id)requestFromData:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)createDictionary;
- (id)initWithHandles:(id)a0 serviceName:(id)a1 context:(id)a2;

@end
