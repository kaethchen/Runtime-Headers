@interface CNSiriIntelligenceSettings : NSObject <CNSiriIntelligenceSettingsProtocol> {
    _Atomic BOOL _shouldShowSiriSuggestions;
    int _notificationToken;
}

- (void)dealloc;
- (id)init;
- (void)setShouldShowSiriSuggestions:(BOOL)a0;
- (BOOL)shouldShowSiriSuggestions;

@end
