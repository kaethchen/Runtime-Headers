@class NSString;

@interface WDProtocolAutomationCookie : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) double expires;
@property (nonatomic) int size;
@property (nonatomic) BOOL httpOnly;
@property (nonatomic) BOOL secure;
@property (nonatomic) BOOL session;
@property (nonatomic) long long sameSite;

- (id)initWithPayload:(id)a0;
- (id)initWithName:(id)a0 value:(id)a1 domain:(id)a2 path:(id)a3 expires:(double)a4 size:(int)a5 httpOnly:(BOOL)a6 secure:(BOOL)a7 session:(BOOL)a8 sameSite:(long long)a9;
- (id)initWithProtocolObject:(id)a0;

@end
