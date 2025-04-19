@class NSString;

@interface CXServiceDomain : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *machName;

+ (id)callKitServiceDomain;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 machName:(id)a1;

@end
