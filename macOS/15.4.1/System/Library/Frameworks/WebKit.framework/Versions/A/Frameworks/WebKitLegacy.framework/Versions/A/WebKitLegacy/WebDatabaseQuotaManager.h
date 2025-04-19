@class WebSecurityOrigin;

@interface WebDatabaseQuotaManager : NSObject <WebQuotaManager> {
    WebSecurityOrigin *_origin;
}

- (unsigned long long)usage;
- (id)origin;
- (unsigned long long)quota;
- (id)initWithOrigin:(id)a0;
- (void)setQuota:(unsigned long long)a0;

@end
