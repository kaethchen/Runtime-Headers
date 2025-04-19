@interface ICNFIMAPMessageDetails : NSObject

@property (nonatomic) unsigned int messageFlags;
@property (nonatomic) unsigned int uid;
@property (nonatomic) BOOL isInvalid;

+ (id)newMessageDetailsWithPersistentIDType:(char)a0;
+ (id)searchDetails:(id)a0 forUid:(unsigned int)a1 skippingUid:(unsigned int)a2;

- (id)description;
- (id)init;

@end
