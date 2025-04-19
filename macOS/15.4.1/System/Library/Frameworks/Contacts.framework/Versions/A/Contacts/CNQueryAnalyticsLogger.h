@class NSString, CNAuditToken, NSObject, CNPair;
@protocol CNKeyboardStateMonitor, OS_tcc_identity;

@interface CNQueryAnalyticsLogger : NSObject <CNQueryAnalyticsLogger>

@property (copy, nonatomic) CNPair *processIdentity;
@property (retain, nonatomic) CNAuditToken *auditToken;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (retain, nonatomic) id<CNKeyboardStateMonitor> keyboardStateMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (void)recordQueryWithFetchRequest:(id)a0;

@end
