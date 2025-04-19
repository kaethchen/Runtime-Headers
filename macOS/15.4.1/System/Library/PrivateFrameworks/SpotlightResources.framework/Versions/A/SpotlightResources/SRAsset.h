@class NSString, NSArray, NSDictionary;

@interface SRAsset : NSObject {
    NSDictionary *_paths;
}

@property (readonly, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) long long deliveryType;
@property (readonly, nonatomic) NSArray *contentNames;
@property (readonly, nonatomic) NSArray *contentPaths;

+ (id)assetWithLocaleIdentifier:(id)a0 contentType:(id)a1 deliveryType:(long long)a2 path:(id)a3;
+ (id)assetWithLocaleIdentifier:(id)a0 contentType:(id)a1 deliveryType:(long long)a2 resourceRoot:(id)a3 pathNames:(id)a4;

- (id)description;
- (void).cxx_destruct;
- (id)deliveryTypeString;
- (id)initWithLocaleIdentifier:(id)a0 contentType:(id)a1 deliveryType:(long long)a2 paths:(id)a3;
- (id)pathWithName:(id)a0;

@end
