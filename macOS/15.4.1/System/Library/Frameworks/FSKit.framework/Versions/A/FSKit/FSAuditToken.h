@interface FSAuditToken : NSObject <NSSecureCoding> {
    struct { unsigned int val[8]; } _token;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int ruid;
@property (readonly, nonatomic) unsigned int euid;
@property (readonly, nonatomic) unsigned int rgid;
@property (readonly, nonatomic) unsigned int egid;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) int pidversion;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } audit_token;
@property (readonly, nonatomic) BOOL isOurUID;

+ (id)token;
+ (id)tokenWithToken:(struct { unsigned int x0[8]; })a0;
+ (struct { unsigned int x0[8]; })getOurToken;
+ (id)tokenWithData:(id)a0;

- (id)init;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithToken:(const struct { unsigned int x0[8]; } *)a0;
- (id)tokenWithRuid:(unsigned int)a0;

@end
