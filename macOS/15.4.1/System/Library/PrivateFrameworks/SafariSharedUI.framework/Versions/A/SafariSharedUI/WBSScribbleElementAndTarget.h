@class _WKTargetedElementInfo, WBSScribbleElement;

@interface WBSScribbleElementAndTarget : NSObject

@property (readonly, nonatomic) WBSScribbleElement *element;
@property (readonly, nonatomic) _WKTargetedElementInfo *target;

- (void).cxx_destruct;
- (id)initWithElement:(id)a0 target:(id)a1;

@end
