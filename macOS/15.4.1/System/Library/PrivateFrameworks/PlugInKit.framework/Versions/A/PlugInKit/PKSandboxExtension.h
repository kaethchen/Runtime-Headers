@class NSString;
@protocol PKSandboxProvider;

@interface PKSandboxExtension : NSObject

@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) id<PKSandboxProvider> provider;
@property long long handle;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)consume;
- (void)expel;
- (id)initWithExtension:(id)a0 provider:(id)a1;

@end
