@class ASCLockupRequest, ASCLockup, NSError;

@interface _ASCLockupResponse : NSObject

@property (readonly, copy, nonatomic) ASCLockupRequest *request;
@property (readonly, copy, nonatomic) ASCLockup *lockup;
@property (readonly, copy, nonatomic) NSError *error;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 lockup:(id)a1 error:(id)a2;

@end
