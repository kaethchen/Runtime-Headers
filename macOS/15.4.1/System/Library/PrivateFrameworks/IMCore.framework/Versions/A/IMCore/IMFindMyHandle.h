@class NSString, FMLHandle, FMFHandle;

@interface IMFindMyHandle : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) FMFHandle *fmfHandle;
@property (readonly, nonatomic) FMLHandle *fmlHandle;

+ (id)handleWithFMFHandle:(id)a0;
+ (id)handleWithFMLHandle:(id)a0;
+ (id)handleWithIdentifier:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
