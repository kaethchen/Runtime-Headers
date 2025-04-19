@class NSNumber, NSString;

@interface MTRChannelClusterChannelInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *majorNumber;
@property (copy, nonatomic) NSNumber *minorNumber;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *callSign;
@property (copy, nonatomic) NSString *affiliateCallSign;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSNumber *type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
