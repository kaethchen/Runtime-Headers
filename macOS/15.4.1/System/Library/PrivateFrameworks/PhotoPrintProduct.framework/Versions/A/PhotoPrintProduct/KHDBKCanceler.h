@interface KHDBKCanceler : NSObject

@property (nonatomic) BOOL canceled;

- (void)cancelProgressPanel:(id)a0;
- (void)skipProgressPanel:(id)a0;

@end
