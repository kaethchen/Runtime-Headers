@interface AppExtensionObjC : NSObject

@property (readonly, nonatomic) void *cpp;

- (void)_baseURIDidChange:(id)a0;
- (void)startListeningForBaseURIChange;

@end
