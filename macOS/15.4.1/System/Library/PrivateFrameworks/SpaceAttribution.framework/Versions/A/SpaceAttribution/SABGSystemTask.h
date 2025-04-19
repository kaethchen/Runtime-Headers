@class BGSystemTask;

@interface SABGSystemTask : NSObject

@property (retain) BGSystemTask *task;
@property (readonly) BOOL shouldDefer;

+ (id)newWithBGTask:(id)a0;

- (void).cxx_destruct;
- (void)deferTask;
- (id)initWithBGTask:(id)a0;

@end
