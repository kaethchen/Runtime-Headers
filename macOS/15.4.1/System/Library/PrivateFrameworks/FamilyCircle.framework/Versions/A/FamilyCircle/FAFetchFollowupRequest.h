@class NSString;

@interface FAFetchFollowupRequest : FAFamilyCircleRequest {
    NSString *_altDSID;
}

- (void).cxx_destruct;
- (id)initWithAltDSID:(id)a0;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;

@end
