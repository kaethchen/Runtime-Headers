@interface SiriMessageTypes.ActiveUserSessionDetectedMessage : SiriMessageTypes.SessionMessageBase {
    void /* unknown type, empty encoding */ userSessionState;
    void /* unknown type, empty encoding */ activeUserPersonaId;
    void /* unknown type, empty encoding */ accessLevel;
}

- (void).cxx_destruct;

@end
