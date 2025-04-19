@class NSString, NSInspectorBar, NSView;
@protocol NSInspectorBarItemController;

@interface NSInspectorBarItem : NSObject {
    NSString *_identifier;
}

@property (readonly) NSString *identifier;
@property (readonly) id<NSInspectorBarItemController> controller;
@property (readonly) NSInspectorBar *inspectorBar;
@property (readonly) NSView *view;
@property (readonly) BOOL canBeDetached;
@property (readonly) BOOL detachesFirst;

+ (id)separatorItem;

- (void)dealloc;
- (id)view;
- (void)_setInspectorBar:(id)a0;
- (id)initWithIdentifier:(id)a0 controller:(id)a1;

@end
