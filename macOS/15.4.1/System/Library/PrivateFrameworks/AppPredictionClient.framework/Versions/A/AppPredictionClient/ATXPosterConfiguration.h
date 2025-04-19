@class NSString, NSArray, ATXComplication, NSUUID, ATXFaceGalleryItem;

@interface ATXPosterConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) ATXComplication *inlineComplication;
@property (readonly, copy, nonatomic) NSArray *complications;
@property (readonly, copy, nonatomic) NSArray *landscapeComplications;
@property (readonly, nonatomic) NSUUID *modeUUID;
@property (readonly, copy, nonatomic) NSString *font;
@property (readonly, copy, nonatomic) NSString *color;
@property (readonly, copy, nonatomic) NSString *numberingSystem;
@property (readonly, copy, nonatomic) NSString *posterUUID;
@property (readonly, nonatomic) ATXFaceGalleryItem *galleryItem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 active:(BOOL)a1 selected:(BOOL)a2 inlineComplication:(id)a3 complications:(id)a4 landscapeComplications:(id)a5 modeUUID:(id)a6 font:(id)a7 color:(id)a8 numberingSystem:(id)a9 posterUUID:(id)a10 galleryItem:(id)a11;
- (id)initWithExtensionBundleIdentifier:(id)a0 active:(BOOL)a1 selected:(BOOL)a2 inlineComplication:(id)a3 complications:(id)a4 modeUUID:(id)a5 font:(id)a6 color:(id)a7 numberingSystem:(id)a8 posterUUID:(id)a9 galleryItem:(id)a10;
- (BOOL)isEqualToATXPosterConfiguration:(id)a0;

@end
