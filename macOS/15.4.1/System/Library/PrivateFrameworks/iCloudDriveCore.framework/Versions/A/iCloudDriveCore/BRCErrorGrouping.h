@class NSError;

@interface BRCErrorGrouping : NSObject <NSCopying>

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL isPCSChained;
@property (readonly, nonatomic) BOOL isEnhancedDrivePrivacyEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithError:(id)a0 pcsChained:(BOOL)a1 enhancedDrivePrivacyEnabled:(BOOL)a2;
- (BOOL)isEqualToErrorGrouping:(id)a0;

@end
