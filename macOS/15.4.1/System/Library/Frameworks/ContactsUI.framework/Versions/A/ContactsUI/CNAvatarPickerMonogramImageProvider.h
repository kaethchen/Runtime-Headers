@class CNAvatarImageRenderer;
@protocol CNAvatarImageRenderingScope;

@interface CNAvatarPickerMonogramImageProvider : NSObject

@property (retain, nonatomic) CNAvatarImageRenderer *avatarRenderer;
@property (retain, nonatomic) id<CNAvatarImageRenderingScope> renderingScope;

- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)monogramForString:(id)a0 colorName:(id)a1;

@end
