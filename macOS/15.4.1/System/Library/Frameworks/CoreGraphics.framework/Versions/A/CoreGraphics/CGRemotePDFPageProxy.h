@class NSUUID, NSString;
@protocol CGRemotePDFPageProtocol, NSXPCProxyCreating;

@interface CGRemotePDFPageProxy : NSObject {
    id<CGRemotePDFPageProtocol, NSXPCProxyCreating> _pageProxy;
}

@property (readonly) NSUUID *identifier;
@property (readonly) long long rotation;
@property (readonly) NSString *pageText;

- (void).cxx_destruct;
- (void)drawWithBox:(int)a0 size:(struct CGSize { double x0; double x1; })a1 colorSpace:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (id)getPageTextAndReturnError:(id *)a0;
- (id)initWithRemotePage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForBox:(int)a0;

@end
