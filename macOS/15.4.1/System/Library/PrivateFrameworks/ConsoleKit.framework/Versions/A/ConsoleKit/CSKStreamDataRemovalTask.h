@class CSKStreamData;

@interface CSKStreamDataRemovalTask : CSKStreamTask

@property (readonly, nonatomic) unsigned long long removalCount;
@property (readonly, weak, nonatomic) CSKStreamData *data;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)name;

- (id)init;
- (void).cxx_destruct;
- (id /* block */)handler;
- (id)initWithData:(id)a0 removalCount:(unsigned long long)a1;

@end
