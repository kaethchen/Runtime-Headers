@class NSURL;

@interface ICSingleFileOpenPanelDelegate : NSObject

@property (retain, nonatomic) NSURL *singleFileURL;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (BOOL)panel:(id)a0 shouldEnableURL:(id)a1;

@end
