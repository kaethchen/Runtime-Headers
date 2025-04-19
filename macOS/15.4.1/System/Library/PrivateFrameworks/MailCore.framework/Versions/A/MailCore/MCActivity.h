@class NSProgress;
@protocol MCActivityDelegate;

@interface MCActivity : NSObject

@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) BOOL isFinished;
@property (weak, nonatomic) id<MCActivityDelegate> delegate;
@property (nonatomic) long long qualityOfService;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)end;
- (void)begin;

@end
