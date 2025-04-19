@class NSNumber, NSString;

@interface MTRDescriptorClusterSemanticTagStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *mfgCode;
@property (copy, nonatomic) NSNumber *namespaceID;
@property (copy, nonatomic) NSNumber *tag;
@property (copy, nonatomic) NSString *label;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
