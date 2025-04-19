@class NSArray, NSDictionary;

@interface FCCKPrivateDatabaseVersionMapping : NSObject

@property (readonly, nonatomic) NSArray *baseValues;
@property (readonly, nonatomic) NSDictionary *V2Changes;
@property (readonly, nonatomic) NSDictionary *V3Changes;
@property (readonly, nonatomic) NSDictionary *V4Changes;
@property (readonly, nonatomic) NSDictionary *forwardMapToV2;
@property (readonly, nonatomic) NSDictionary *forwardMapToV3;
@property (readonly, nonatomic) NSDictionary *forwardMapToV4;
@property (readonly, nonatomic) NSDictionary *reverseMap;

+ (id)mappingWithBaseValues:(id)a0 V2Changes:(id)a1 V3Changes:(id)a2 V4Changes:(id)a3;

- (void).cxx_destruct;
- (BOOL)containsValuePassingTest:(id /* block */)a0;
- (id)allValuesForVersion:(long long)a0;
- (id)allValuesModifiedFromVersion:(long long)a0 toVersion:(long long)a1;
- (id)initWithBaseValues:(id)a0 V2Changes:(id)a1 V3Changes:(id)a2 V4Changes:(id)a3;
- (id)mapValue:(id)a0 toVersion:(long long)a1;
- (id)mappingByTransformingValuesWithBlock:(id /* block */)a0;

@end
