@interface UAFRetryState : NSObject

@property (nonatomic) unsigned int retryCount;
@property (nonatomic) BOOL pending;
@property (nonatomic) BOOL cancelled;

@end
