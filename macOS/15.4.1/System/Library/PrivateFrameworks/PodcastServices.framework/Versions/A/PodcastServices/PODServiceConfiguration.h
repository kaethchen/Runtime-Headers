@class NSString, NSObject, NSXPCInterface;
@protocol OS_os_log;

@interface PODServiceConfiguration : NSObject

@property (readonly) NSString *serviceName;
@property (readonly) NSXPCInterface *serviceInterface;
@property (readonly) NSXPCInterface *clientInterface;
@property (readonly) NSString *errorDomain;
@property (readonly) NSObject<OS_os_log> *loggingCategory;

- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 serviceInterface:(id)a1 clientInterface:(id)a2 errorDomain:(id)a3 loggingCategory:(id)a4;

@end
