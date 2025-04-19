@class NSView;
@protocol MUPlatterViewStyleProviding;

@interface MUPlatterView : NSView {
    id<MUPlatterViewStyleProviding> _visualStyleProvider;
}

@property (readonly, nonatomic) NSView *contentView;

- (id)init;
- (void).cxx_destruct;
- (void)_setup;
- (id)initWithContentView:(id)a0;
- (id)_createVisualStyleProvider;

@end
