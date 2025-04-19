@class NSString;

@interface AMSMediaTaskTypeConfig : NSObject

@property (readonly) NSString *hostBagKey;
@property (readonly) BOOL includePlatform;
@property (readonly) NSString *realm;
@property (readonly) long long type;
@property (readonly) NSString *typeString;

+ (id)configForType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 typeString:(id)a1 hostBagKey:(id)a2 realm:(id)a3 includePlatform:(BOOL)a4;

@end
