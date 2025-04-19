@class NSString, NSArray;

@interface _SGTABPersonResult : NSObject

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSArray *values;
@property (readonly, nonatomic) id representedObject;

- (void).cxx_destruct;
- (void)addValue:(id)a0;
- (id)initWithDisplayName:(id)a0 representedObject:(id)a1 values:(id)a2;
- (id)initWithDisplayName:(id)a0 values:(id)a1;
- (id)initWithPerson:(id)a0 includeAllScreenNames:(BOOL)a1;

@end
