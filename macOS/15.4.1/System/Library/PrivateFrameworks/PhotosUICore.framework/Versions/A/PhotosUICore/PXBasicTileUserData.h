@class PXViewSpec;

@interface PXBasicTileUserData : NSObject

@property (readonly, nonatomic) PXViewSpec *viewSpec;

+ (id)userDataWithViewSpec:(id)a0;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithViewSpec:(id)a0;

@end
