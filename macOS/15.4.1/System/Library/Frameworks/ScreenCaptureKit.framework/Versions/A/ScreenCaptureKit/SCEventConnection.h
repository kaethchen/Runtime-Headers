@class NSObject;
@protocol OS_dispatch_source;

@interface SCEventConnection : NSObject

@property unsigned int connection;
@property (retain) NSObject<OS_dispatch_source> *source;
@property (copy) id /* block */ handler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)activate;

@end
