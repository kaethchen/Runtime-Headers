@class NSString;
@protocol VSBackgroundTaskDelegate;

@interface VSBackgroundTask : NSObject

@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<VSBackgroundTaskDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)end;
- (BOOL)begin;

@end
