@class TCTokenInfo;

@interface TCTokenEdit : NSObject <NSCopying>

@property (readonly) long long operation;
@property (readonly, copy) TCTokenInfo *inputToken;
@property (readonly, copy) TCTokenInfo *outputToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOperation:(long long)a0 inputToken:(id)a1 outputToken:(id)a2;

@end
