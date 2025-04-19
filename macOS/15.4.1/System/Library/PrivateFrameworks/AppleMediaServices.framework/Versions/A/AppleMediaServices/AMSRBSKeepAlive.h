@class NSString;

@interface AMSRBSKeepAlive : NSObject {
    void /* unknown type, empty encoding */ keepAlive;
    void /* unknown type, empty encoding */ name;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ style;

+ (id)keepAliveWithName:(id)a0;
+ (id)keepAliveWithName:(id)a0 style:(long long)a1;
+ (void)keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;
+ (void)keepAliveWithName:(id)a0 style:(long long)a1 qosOverrideIfRBManaged:(unsigned int)a2 relativePriority:(long long)a3 block:(id /* block */)a4;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;

@end
