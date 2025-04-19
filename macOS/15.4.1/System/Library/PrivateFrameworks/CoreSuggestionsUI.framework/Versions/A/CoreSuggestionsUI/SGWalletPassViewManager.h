@class NSData, PKPass;

@interface SGWalletPassViewManager : NSObject

@property (readonly, nonatomic) NSData *passData;
@property (readonly, nonatomic) PKPass *pass;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)title;
- (id)organizationName;
- (id)passes;
- (id)passStyle;
- (double)passTimeInterval;

@end
