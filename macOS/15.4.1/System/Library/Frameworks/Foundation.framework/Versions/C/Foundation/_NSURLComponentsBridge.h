@class NSString, NSNumber, NSArray;

@interface _NSURLComponentsBridge : NSURLComponents

@property (readonly) NSString *_scheme;
@property (readonly) NSString *_percentEncodedUser;
@property (readonly) NSString *_percentEncodedPassword;
@property (readonly) NSString *_percentEncodedHost;
@property (readonly) NSString *_encodedHost;
@property (readonly) NSNumber *_port;
@property (readonly) NSString *_percentEncodedPath;
@property (readonly) NSString *_percentEncodedQuery;
@property (readonly) NSArray *_percentEncodedQueryItems;
@property (readonly) NSString *_percentEncodedFragment;

- (void)setEncodedHost:(id)a0;
- (id)encodedHost;
- (id)percentEncodedFragment;
- (id)percentEncodedHost;
- (id)percentEncodedPassword;
- (id)percentEncodedPath;
- (id)percentEncodedQuery;
- (id)percentEncodedQueryItems;
- (id)percentEncodedUser;
- (id)port;
- (id)scheme;
- (void)setPercentEncodedFragment:(id)a0;
- (void)setPercentEncodedHost:(id)a0;
- (void)setPercentEncodedPassword:(id)a0;
- (void)setPercentEncodedPath:(id)a0;
- (void)setPercentEncodedQuery:(id)a0;
- (void)setPercentEncodedUser:(id)a0;
- (void)setPort:(id)a0;
- (void)setScheme:(id)a0;
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
- (void)setPercentEncodedQueryItems:(id)a0;

@end
