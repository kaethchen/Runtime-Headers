@class NSString;

@interface SFEntitledAssetConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long assetType;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *regionId;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAssetType:(unsigned long long)a0 language:(id)a1 regionId:(id)a2;
- (id)initWithAssetType:(unsigned long long)a0 locale:(id)a1 regionId:(id)a2;
- (id)initWithLanguage:(id)a0 assetType:(unsigned long long)a1;
- (id)initWithLanguage:(id)a0 task:(id)a1;
- (id)initWithLanguage:(id)a0 taskHint:(long long)a1;

@end
