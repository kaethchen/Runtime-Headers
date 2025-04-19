@protocol AVTUILogger;

@interface AVTAvatarsDaemonClient : NSObject <AVTAvatarsDaemon>

@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, copy, nonatomic) id /* block */ connectionFactory;

- (void).cxx_destruct;
- (void)checkIn;
- (id)initWithLogger:(id)a0;
- (id)initWithConnectionFactory:(id /* block */)a0 logger:(id)a1;
- (void)performWorkWithConnection:(id /* block */)a0;
- (void)performWorkWithSynchronousProxy:(id /* block */)a0;

@end
