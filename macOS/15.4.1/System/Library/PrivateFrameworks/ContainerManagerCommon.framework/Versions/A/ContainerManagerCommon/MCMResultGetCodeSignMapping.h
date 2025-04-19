@class NSDictionary;

@interface MCMResultGetCodeSignMapping : MCMResultBase

@property (readonly, nonatomic) NSDictionary *info;

- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (BOOL)encodeResultOntoReply:(id)a0;

@end
