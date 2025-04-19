@class NSArray;
@protocol _NSQuickActionItemSource, NSServicesRequestor;

@interface _NSExtensionQuickActionInvocationRequestor : NSObject

@property (readonly) id<_NSQuickActionItemSource> itemSource;
@property (readonly) id<NSServicesRequestor> servicesRequestor;
@property (readonly, copy) NSArray *items;
@property (readonly) BOOL allowsEditors;

- (void).cxx_destruct;
- (id)initWithItemSource:(id)a0 servicesRequestor:(id)a1 items:(id)a2 allowsEditors:(BOOL)a3;

@end
