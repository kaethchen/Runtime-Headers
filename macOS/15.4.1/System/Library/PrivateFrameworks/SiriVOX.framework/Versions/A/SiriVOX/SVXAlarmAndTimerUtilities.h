@class SVXSpeechSynthesisUtils, SVXNSLocaleFactory, SVXBundleUtils;

@interface SVXAlarmAndTimerUtilities : NSObject {
    SVXBundleUtils *_bundleUtils;
    SVXSpeechSynthesisUtils *_speechSynthesisUtils;
    SVXNSLocaleFactory *_localeFactory;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)getIsSpeakable:(id)a0;
- (id)_alarmsListTextWithFiringAlarms:(id)a0 concatenationString:(id)a1 languageCode:(id)a2 preferences:(id)a3;
- (id)_getCalendarWithLocale:(id)a0;
- (id)_getDateFormatterWithLocale:(id)a0 calendar:(id)a1;
- (id)_getLocaleWithLanguageCode:(id)a0 preferences:(id)a1;
- (BOOL)_isEndpoint:(id)a0;
- (id)_textFromActiveTimersAndAlarms:(id)a0 orderedFiringAlarms:(id)a1 concatenationString:(id)a2;
- (id)_textFromFiringAlarms:(id)a0 alarmsListText:(id)a1 languageCode:(id)a2 gender:(long long)a3;
- (id)_textFromFiringTimers:(id)a0 timersListText:(id)a1 languageCode:(id)a2 gender:(long long)a3;
- (id)_timersListTextWithFiringTimers:(id)a0 concatenationString:(id)a1 languageCode:(id)a2 gender:(long long)a3;
- (id)createSpeechSynthesisRequestWithContext:(id)a0 instanceContext:(id)a1;
- (id)siriVOXFrameworkBundle;

@end
