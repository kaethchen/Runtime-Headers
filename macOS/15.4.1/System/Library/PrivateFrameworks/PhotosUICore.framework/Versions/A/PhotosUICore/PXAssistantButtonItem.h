@class NSString;

@interface PXAssistantButtonItem : PXObservable

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;

- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithTitle:(id)a0;
- (void)setTitle:(id)a0;
- (void)setDisabled:(BOOL)a0;
- (void)performChanges:(id /* block */)a0;

@end
