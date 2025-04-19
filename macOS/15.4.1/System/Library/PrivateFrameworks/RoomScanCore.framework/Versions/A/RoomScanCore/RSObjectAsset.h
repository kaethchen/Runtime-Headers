@class NSArray, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface RSObjectAsset : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_objects;
    NSMutableDictionary *_groups;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *objects;
@property (readonly, nonatomic) NSDictionary *groups;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)GetAllObjects;

@end
