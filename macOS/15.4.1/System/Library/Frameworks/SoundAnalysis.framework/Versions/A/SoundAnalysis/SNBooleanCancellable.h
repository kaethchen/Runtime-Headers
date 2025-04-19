@interface SNBooleanCancellable : NSObject <SNCancellable>

@property (nonatomic) void /* unknown type, empty encoding */ isCancelled;

- (id)init;
- (void)cancel;

@end
