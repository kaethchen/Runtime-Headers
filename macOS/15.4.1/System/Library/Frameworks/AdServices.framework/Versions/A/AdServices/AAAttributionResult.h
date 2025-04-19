@class NSString, NSData, NSError;

@interface AAAttributionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) NSData *tokenKey;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long source;
@property (nonatomic) double daemonRunningTime;
@property (retain, nonatomic) NSString *storeFront;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0;
- (id)initWithToken:(id)a0 tokenKey:(id)a1 source:(long long)a2;
- (id)initWithToken:(id)a0 tokenKey:(id)a1 success:(BOOL)a2 error:(id)a3 source:(long long)a4;

@end
