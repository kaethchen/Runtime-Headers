@class NSString;

@interface CADAuditTokenTCCPermissionChecker : NSObject <CADTCCPermissionChecker> {
    struct { unsigned int val[8]; } _auditToken;
}

@property (readonly, nonatomic) unsigned long long eventAuthorization;
@property (readonly, nonatomic) unsigned long long remindersAuthorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (unsigned long long)_authorizationForService:(struct __CFString { } *)a0;
- (void)requestAuthorization:(unsigned long long)a0 forService:(struct __CFString { } *)a1 clientDictionary:(id)a2 completion:(id /* block */)a3;

@end
