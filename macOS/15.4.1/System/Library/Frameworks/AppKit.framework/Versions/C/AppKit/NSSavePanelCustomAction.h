@class NSString, NSArray;
@protocol _NSSavePanelCommonIPI;

@interface NSSavePanelCustomAction : NSObject

@property (copy) NSString *identifier;
@property (copy) NSString *localizedTitle;
@property (weak) id<_NSSavePanelCommonIPI> owningPanel;
@property BOOL _propChangeWatcher;
@property (copy) NSArray *supportedContentTypes;
@property BOOL supportsMultipleItems;

+ (id)actionWithIdentifier:(id)a0 localizedTitle:(id)a1;
+ (id)keyPathsForValuesAffecting_propChangeWatcher;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)createXPCClone;
- (id)initWithIdentifier:(id)a0 localizedTitle:(id)a1;

@end
