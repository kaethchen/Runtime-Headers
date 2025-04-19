@interface NSWritingToolsCoordinatorAnimationParameters : NSObject

@property (readonly) double duration;
@property (readonly) double delay;
@property (copy) id /* block */ progressHandler;
@property (copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithDelay:(double)a0 duration:(double)a1;

@end
