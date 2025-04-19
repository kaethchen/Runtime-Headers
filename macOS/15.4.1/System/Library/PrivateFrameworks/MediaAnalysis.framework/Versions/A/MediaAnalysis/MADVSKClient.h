@class VSKClient;

@interface MADVSKClient : NSObject

@property (readonly, nonatomic) BOOL isPrewarmed;
@property (readonly, nonatomic) VSKClient *client;

- (void)dealloc;
- (void).cxx_destruct;
- (void)warmup;
- (id)initWithConfig:(id)a0 error:(id *)a1;
- (void)cooldown;

@end
