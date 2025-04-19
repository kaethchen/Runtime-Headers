@class NSString, WDBrowsingContext;

@interface WDBrowsingContextProperties : NSObject

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) WDBrowsingContext *handle;
@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } windowFrame;

- (void).cxx_destruct;
- (id)initWithJSONObject:(id)a0;
- (id)initWithBrowsingContext:(id)a0 url:(id)a1 active:(BOOL)a2 windowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
