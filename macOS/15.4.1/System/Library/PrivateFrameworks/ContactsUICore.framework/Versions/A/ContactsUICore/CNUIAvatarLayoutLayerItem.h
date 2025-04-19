@class CALayer, NSString;
@protocol CNCancelable;

@interface CNUIAvatarLayoutLayerItem : NSObject

@property (retain, nonatomic) CALayer *layer;
@property (retain, nonatomic) id<CNCancelable> avatarImageRendererToken;
@property (copy, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (void)resetToken;

@end
