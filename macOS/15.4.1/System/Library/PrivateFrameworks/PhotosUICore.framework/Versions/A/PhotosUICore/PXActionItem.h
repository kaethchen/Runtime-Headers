@class NSString, NSImage;
@protocol PXMenuAction;

@interface PXActionItem : NSObject <PXMenuAction>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, copy, nonatomic) NSImage *image;
@property (readonly, nonatomic) unsigned long long role;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) id<PXMenuAction> alternateAction;
@property (readonly, nonatomic) id /* block */ customMenuElementFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performAction;
- (id)initWithTitle:(id)a0 systemImageName:(id)a1 role:(unsigned long long)a2 handler:(id /* block */)a3;
- (id)initWithTitle:(id)a0 systemImageName:(id)a1 role:(unsigned long long)a2 state:(long long)a3 handler:(id /* block */)a4;

@end
