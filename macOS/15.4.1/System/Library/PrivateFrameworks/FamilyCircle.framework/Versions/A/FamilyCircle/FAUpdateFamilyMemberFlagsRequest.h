@class NSNumber, NSDictionary;

@interface FAUpdateFamilyMemberFlagsRequest : FAFamilyCircleRequest {
    NSNumber *_dsid;
    NSDictionary *_flags;
}

- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithFamilyMemberDSID:(id)a0 flags:(id)a1;

@end
