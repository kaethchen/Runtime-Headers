@class NSTextField, TBorderedView, NSObject, TCPAddressField;
@protocol TChooseParticipantsDelegate;

@interface TChooseParticipantsViewController : NSViewController {
    TCPAddressField *_addressField;
    TBorderedView *_borderedView;
    NSTextField *_addressLabel;
    NSObject<TChooseParticipantsDelegate> *_weakDelegate;
}

@property (weak, nonatomic) NSObject<TChooseParticipantsDelegate> *delegate;
@property (getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)recipients;
- (void)setPlaceholderString:(id)a0;
- (void)configureView;
- (void)makeFirstResponder;
- (BOOL)showing;
- (BOOL)addressingComplete;
- (void)receivedControlTextDidChangeNotification;

@end
