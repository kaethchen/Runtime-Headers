@class APConfigurationResponseHandler, APUnfairLock;

@interface APConfigurationStorage : NSObject

@property (retain, nonatomic) APUnfairLock *lock;
@property (retain, nonatomic) APConfigurationResponseHandler *responseHandler;

- (id)init;
- (void).cxx_destruct;
- (void)cancelConfigurationUpdate;
- (BOOL)resetConfigurationSystem;
- (BOOL)updateConfigurationSystemWithData:(id)a0;

@end
