@interface NSDocumentCustomConfirmationDialogSettings : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ explanation;
    void /* unknown type, empty encoding */ buttons;
}

- (id)init;
- (void).cxx_destruct;
- (void)setExplanation:(id)a0;
- (void)setTitle:(id)a0;
- (void)addButtonWithTitle:(id)a0 action:(id /* block */)a1;

@end
