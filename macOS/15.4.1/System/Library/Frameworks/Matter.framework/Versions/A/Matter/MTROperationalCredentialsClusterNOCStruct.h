@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterNOCStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSData *noc;
@property (copy, nonatomic) NSData *icac;
@property (copy, nonatomic) NSData *vvsc;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
