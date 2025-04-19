@class NSArray, NSString;

@interface TUCallGroup : NSObject

@property (readonly, copy, nonatomic) NSArray *calls;
@property (readonly, nonatomic) int status;
@property (readonly, copy, nonatomic) NSString *displayName;

- (id)description;
- (void)forwardInvocation:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithCall:(id)a0;
- (id)initWithCalls:(id)a0;
- (BOOL)isEqualToCallGroup:(id)a0;

@end
