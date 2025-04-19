@interface __NSPlaceholderURLComponents : NSURLComponents

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (oneway void)release;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (id)string;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfFragment;
- (id)URL;
- (id)URLRelativeToURL:(id)a0;
- (id)initWithString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPassword;
- (void)setEncodedHost:(id)a0;
- (id)encodedHost;
- (id)fragment;
- (id)host;
- (id)password;
- (id)path;
- (id)percentEncodedFragment;
- (id)percentEncodedHost;
- (id)percentEncodedPassword;
- (id)percentEncodedPath;
- (id)percentEncodedQuery;
- (id)percentEncodedQueryItems;
- (id)percentEncodedUser;
- (id)port;
- (id)query;
- (id)queryItems;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfHost;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPath;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPort;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfQuery;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfScheme;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfUser;
- (id)scheme;
- (void)setFragment:(id)a0;
- (void)setHost:(id)a0;
- (void)setPassword:(id)a0;
- (void)setPath:(id)a0;
- (void)setPercentEncodedFragment:(id)a0;
- (void)setPercentEncodedHost:(id)a0;
- (void)setPercentEncodedPassword:(id)a0;
- (void)setPercentEncodedPath:(id)a0;
- (void)setPercentEncodedQuery:(id)a0;
- (void)setPercentEncodedUser:(id)a0;
- (void)setPort:(id)a0;
- (void)setQuery:(id)a0;
- (void)setQueryItems:(id)a0;
- (void)setScheme:(id)a0;
- (void)setUser:(id)a0;
- (id)user;
- (id)initWithURL:(id)a0 resolvingAgainstBaseURL:(BOOL)a1;
- (id)initWithString:(id)a0 encodingInvalidCharacters:(BOOL)a1;
- (void)setPercentEncodedQueryItems:(id)a0;

@end
