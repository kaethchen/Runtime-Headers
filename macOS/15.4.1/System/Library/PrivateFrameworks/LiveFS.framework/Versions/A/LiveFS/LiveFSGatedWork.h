@class NSObject;

@interface LiveFSGatedWork : NSObject

@property (copy) id /* block */ workBlock;
@property long long neededCount;
@property (retain) NSObject *parameter;

- (void).cxx_destruct;
- (void)abort;
- (void)approve;
- (id)initWithCount:(long long)a0 workBlock:(id /* block */)a1;

@end
