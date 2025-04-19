@class NSOperation;

@interface VUIAsynchronousWorkToken : NSObject

@property (retain, nonatomic) NSOperation *operation;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithOperation:(id)a0;

@end
