@class NSString, EXSXPCResponseManager, ESEGrantedDelegate;

@interface EXSGrantedDelegateRequest : NSObject

@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) long long operationType;
@property (readonly, nonatomic) ESEGrantedDelegate *delegate;
@property (readonly, weak, nonatomic) EXSXPCResponseManager *responseManager;

- (void).cxx_destruct;
- (id)initWithRequestID:(id)a0 operationType:(long long)a1 eseDelegate:(id)a2 responseManager:(id)a3;
- (id)initWithRequestID:(id)a0 responseManager:(id)a1;

@end
