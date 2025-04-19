@class NSString, ACAccount;

@interface CDPQuotaStorageAppListRequest : AARequest {
    NSString *_urlStringFormat;
    unsigned long long _appList;
    BOOL _contentSpecifiesE2EE;
}

@property (readonly, nonatomic) ACAccount *account;

- (void).cxx_destruct;
- (id)urlString;
- (id)urlRequest;
- (void)_setAppListHeaderForRequest:(id)a0;
- (void)_setContentTypeHeaderForRequest:(id)a0;
- (id)_urlStringFormatFromBag;
- (id)initWithAccount:(id)a0 appList:(unsigned long long)a1 contentSpecifiesE2EE:(BOOL)a2;
- (BOOL)isUrlAvailable;

@end
