@interface DRSSubmitLogRequest : DRSRequest

+ (id)entityName;
+ (Class)_moClass;

- (id)requestType;
- (id)replyForMessage:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (void)_configureRequestMO:(id)a0;
- (id)_initWithSubmitLogRequestMO_ON_MOC_QUEUE:(id)a0;
- (unsigned long long)expectedType;

@end
