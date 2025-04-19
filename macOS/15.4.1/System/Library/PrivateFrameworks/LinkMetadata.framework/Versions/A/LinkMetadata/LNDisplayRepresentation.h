@class LNImage, LNStaticDeferredLocalizedString, NSArray, LNUIPluginModel;

@interface LNDisplayRepresentation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *subtitle;
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *descriptionText;
@property (readonly, nonatomic) LNImage *image;
@property (readonly, copy, nonatomic) NSArray *synonyms;
@property (readonly, nonatomic) LNUIPluginModel *snippetPluginModel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 synonyms:(id)a3 descriptionText:(id)a4 snippetPluginModel:(id)a5;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 synonyms:(id)a3;
- (id)initWithTitle:(id)a0 snippetPluginModel:(id)a1;
- (id)initWithTitle:(id)a0 snippetPluginModelData:(id)a1;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 synonyms:(id)a3 descriptionText:(id)a4;

@end
