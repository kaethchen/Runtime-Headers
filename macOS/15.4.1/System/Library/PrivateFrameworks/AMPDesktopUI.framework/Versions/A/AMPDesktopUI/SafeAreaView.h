@class NSView;

@interface SafeAreaView : NSView

@property (weak, nonatomic) NSView *header;
@property (weak, nonatomic) NSView *footer;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithHeader:(id)a0 footer:(id)a1;

@end
