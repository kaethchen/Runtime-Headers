@class NSString, NSImage;

@interface VideoHUDMoreBrickLockupModel : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSImage *image;
@property (copy, nonatomic) id /* block */ selectAction;
@property (nonatomic) BOOL marked;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 marked:(BOOL)a2 image:(id)a3 selectAction:(id /* block */)a4;

@end
