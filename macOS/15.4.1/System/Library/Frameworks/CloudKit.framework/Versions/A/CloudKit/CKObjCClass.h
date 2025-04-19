@class NSString, NSArray;

@interface CKObjCClass : NSObject

@property (readonly, nonatomic) Class handle;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *properties;

+ (id)classForHandle:(Class)a0;
+ (id)classForObject:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithHandle:(Class)a0;
- (id)propertyForName:(id)a0;

@end
