@class NSString, APTapAction, NSURL, PCNativeButton, PCNativeAsset, PCNativeStyle;

@interface PCNativeElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *accessibleCaption;
@property (retain, nonatomic) NSURL *actionURL;
@property (retain, nonatomic) PCNativeAsset *asset;
@property (retain, nonatomic) PCNativeButton *button;
@property (retain, nonatomic) NSString *caption;
@property (nonatomic) long long elementID;
@property (retain, nonatomic) PCNativeStyle *style;
@property (retain, nonatomic) APTapAction *tapAction;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
