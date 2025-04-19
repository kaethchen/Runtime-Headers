@class CSKStreamTaskOperation;

@interface CSKStreamTask : NSObject

@property (weak, nonatomic) CSKStreamTaskOperation *parentOperation;

+ (id)name;

- (void).cxx_destruct;
- (id /* block */)handler;

@end
