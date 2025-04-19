@class NSArray, CSKStreamData;

@interface CSKStreamDataAdditionTask : CSKStreamTask

@property (readonly, weak, nonatomic) CSKStreamData *data;
@property (readonly, nonatomic) NSArray *entities;
@property (readonly, nonatomic) unsigned long long direction;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)name;

- (id)init;
- (void).cxx_destruct;
- (id /* block */)handler;
- (id)initWithData:(id)a0 entities:(id)a1 direction:(unsigned long long)a2;

@end
