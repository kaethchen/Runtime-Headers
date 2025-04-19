@class NSString;

@interface FACancelInvitationRequest : FAFamilyCircleRequest {
    NSString *_email;
    NSString *_familyID;
}

- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWith:(id)a0 familyID:(id)a1;

@end
