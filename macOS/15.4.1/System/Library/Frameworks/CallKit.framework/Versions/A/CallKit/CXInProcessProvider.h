@class CXInProcessCallSource, NSString;

@interface CXInProcessProvider : CXProvider

@property (weak, nonatomic) CXInProcessCallSource *callSource;
@property (readonly, copy, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)hostProtocolDelegate;
- (id)initWithConfiguration:(id)a0 callSource:(id)a1;

@end
