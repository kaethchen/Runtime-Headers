@class NSString, ACAccount;

@interface AAMyPhotoRequest : AARequest {
    ACAccount *_account;
}

@property (copy, nonatomic) NSString *serverCacheTag;
@property (retain, nonatomic, setter=setiTunesAccount:) ACAccount *iTunesAccount;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)urlString;
- (id)urlRequest;

@end
