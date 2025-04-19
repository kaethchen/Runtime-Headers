@class NSString;

@interface PLClientApplicationIdentification : NSObject <PLClientIdentification> {
    struct { unsigned int val[8]; } _clientAuditToken;
    int _clientProcessIdentifier;
    NSString *_trustedCallerBundleID;
}

@property (readonly) struct { unsigned int x0[8]; } clientAuditToken;
@property (readonly) int clientProcessIdentifier;
@property (readonly, copy) NSString *trustedCallerBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;

@end
