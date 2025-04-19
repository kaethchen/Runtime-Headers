@class LNResponseContext;

@interface LNRequest : NSObject

@property (readonly, nonatomic) LNResponseContext *responseContext;

- (void).cxx_destruct;
- (id)requestWithContext:(id)a0;

@end
