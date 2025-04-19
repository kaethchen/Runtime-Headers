@class EKObjectID, NSString;

@interface EKImageKey : NSObject <NSCopying>

@property (readonly, nonatomic) EKObjectID *sourceID;
@property (readonly, nonatomic) NSString *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSourceID:(id)a0 identifier:(id)a1;

@end
