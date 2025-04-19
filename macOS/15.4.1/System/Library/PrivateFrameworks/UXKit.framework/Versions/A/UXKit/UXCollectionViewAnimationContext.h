@class NSArray;

@interface UXCollectionViewAnimationContext : NSObject

@property (retain, nonatomic) NSArray *viewAnimations;
@property (nonatomic) long long animationCount;
@property (readonly, copy, nonatomic) id completionHandler;

- (void)dealloc;
- (id)initWithCompletionHandler:(id /* block */)a0;

@end
