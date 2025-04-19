@class NSString;

@interface TPSAppEntity : TPSSerializableObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) id value;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
