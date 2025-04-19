@interface SiriContactsUI.GetContactQuickActionButtonsViewModel : NSObject <CNUIUserActionListConsumer> {
    void /* unknown type, empty encoding */ cancelableTokens;
    void /* unknown type, empty encoding */ contact;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ dialRequestPerformer;
    void /* unknown type, empty encoding */ directInvocationsModel;
    void /* unknown type, empty encoding */ labelCATs;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ textColor;
    void /* unknown type, empty encoding */ shouldUseLightBackground;
    void /* unknown type, empty encoding */ _actionsByType;
    void /* unknown type, empty encoding */ _groupedAudioActions;
    void /* unknown type, empty encoding */ _groupedMessageActions;
    void /* unknown type, empty encoding */ _groupedVideoActions;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
