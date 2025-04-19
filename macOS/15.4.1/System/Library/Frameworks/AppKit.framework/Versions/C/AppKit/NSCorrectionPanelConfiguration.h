@class NSString, NSView, NSArray, NSImage;

@interface NSCorrectionPanelConfiguration : NSObject

@property (readonly, nonatomic) long long panelType;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (readonly, nonatomic) NSView *view;
@property (readonly, nonatomic) unsigned long long ignoredEventMask;
@property (readonly, nonatomic) NSString *primaryString;
@property (readonly, nonatomic) NSArray *alternativeStrings;
@property (readonly, nonatomic) NSImage *auxiliaryButtonImage;
@property (readonly, nonatomic) id /* block */ auxiliaryButtonHandler;
@property (readonly, nonatomic) id /* block */ selectionCompletionHandler;
@property (readonly, nonatomic) BOOL useLocalEventMonitor;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 view:(id)a2 ignoredEventMask:(unsigned long long)a3 primaryString:(id)a4 alternativeStrings:(id)a5 auxiliaryButtonImage:(id)a6 auxiliaryButtonHandler:(id /* block */)a7 selectionCompletionHandler:(id /* block */)a8 useLocalEventMonitor:(BOOL)a9;

@end
