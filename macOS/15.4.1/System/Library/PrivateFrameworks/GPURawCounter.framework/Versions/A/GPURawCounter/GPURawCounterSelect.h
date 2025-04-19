@class NSString, NSDictionary;

@interface GPURawCounterSelect : NSObject

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *options;

+ (id)selectWithName:(id)a0 options:(id)a1;

- (void)dealloc;
- (id)description;
- (id)initWithName:(id)a0 options:(id)a1;

@end
