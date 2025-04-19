@class NSString;

@interface AHTCommon : NSObject

@property (readonly, nonatomic) unsigned int service;
@property (readonly, nonatomic) unsigned int connect;
@property (copy, nonatomic) NSString *name;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (BOOL)open;
- (unsigned long long)registryID;
- (BOOL)reset;
- (id)initWithService:(unsigned int)a0;
- (BOOL)setPower:(long long)a0;
- (id)getBootLoader;
- (BOOL)getPower:(long long *)a0;

@end
