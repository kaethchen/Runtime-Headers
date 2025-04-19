@class NSString, NSDictionary;

@interface HMDLegacyV4ModelInfo : HMFObject

@property (readonly, nonatomic) NSString *hmdTypeName;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) Class hmdModelClass;

- (void).cxx_destruct;
- (id)initWithClass:(Class)a0;

@end
