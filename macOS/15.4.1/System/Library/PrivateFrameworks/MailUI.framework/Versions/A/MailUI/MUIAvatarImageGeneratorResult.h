@class NSImage, MUISenderHeaderColors;

@interface MUIAvatarImageGeneratorResult : NSObject {
    void /* unknown type, empty encoding */ address;
    void /* unknown type, empty encoding */ underlyingImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_image;
    void /* unknown type, empty encoding */ $__lazy_storage_$_analysis;
    void /* unknown type, empty encoding */ $__lazy_storage_$_colors;
}

@property (nonatomic, retain) NSImage *image;
@property (nonatomic) void /* unknown type, empty encoding */ avatarStyle;
@property (nonatomic) void /* unknown type, empty encoding */ avatarType;
@property (nonatomic, retain) MUISenderHeaderColors *headerColors;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0 image:(id)a1 style:(long long)a2 type:(long long)a3;
- (BOOL)needsBorder;

@end
