@class NSString, NSArray, NSURL, NSNumber;

@interface _NSSwiftURLComponents : _NSURLComponentsBridge {
    void /* unknown type, empty encoding */ lock;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSString *_scheme;
@property (nonatomic, copy) NSString *user;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *host;
@property (nonatomic, readonly) NSNumber *_port;
@property (nonatomic, copy) NSString *path;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) NSString *fragment;
@property (nonatomic, readonly) NSString *_percentEncodedUser;
@property (nonatomic, readonly) NSString *_percentEncodedPassword;
@property (nonatomic, readonly) NSString *_percentEncodedHost;
@property (nonatomic, readonly) NSString *_encodedHost;
@property (nonatomic, readonly) NSString *_percentEncodedPath;
@property (nonatomic, readonly) NSString *_percentEncodedQuery;
@property (nonatomic, readonly) NSString *_percentEncodedFragment;
@property (nonatomic, copy) NSArray *queryItems;
@property (nonatomic, readonly) NSArray *_percentEncodedQueryItems;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfScheme;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfUser;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfPassword;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfHost;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfPort;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfPath;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfQuery;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeOfFragment;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)URLRelativeToURL:(id)a0;
- (id)initWithString:(id)a0;
- (id)initWithURL:(id)a0 resolvingAgainstBaseURL:(BOOL)a1;
- (BOOL)_setEncodedHost:(id)a0;
- (BOOL)_setPercentEncodedFragment:(id)a0;
- (BOOL)_setPercentEncodedHost:(id)a0;
- (BOOL)_setPercentEncodedPassword:(id)a0;
- (BOOL)_setPercentEncodedPath:(id)a0;
- (BOOL)_setPercentEncodedQuery:(id)a0;
- (BOOL)_setPercentEncodedQueryItems:(id)a0;
- (BOOL)_setPercentEncodedUser:(id)a0;
- (BOOL)_setPort:(id)a0;
- (BOOL)_setScheme:(id)a0;
- (id)initWithString:(id)a0 encodingInvalidCharacters:(BOOL)a1;

@end
