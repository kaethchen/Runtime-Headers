@class NSString, NSNumber;

@interface MTRDataTypeTestGlobalStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *myBitmap;
@property (copy, nonatomic) NSNumber *myEnum;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
