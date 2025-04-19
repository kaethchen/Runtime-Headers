@interface TextComposer.TCTextCompositionCalendarEventGeneration : NSObject {
    void /* unknown type, empty encoding */ NaSet;
    void /* unknown type, empty encoding */ CategoryNoisyOCR;
    void /* unknown type, empty encoding */ CategoryOther;
    void /* unknown type, empty encoding */ CategoryCalendar;
    void /* unknown type, empty encoding */ UnknownYearString;
    void /* unknown type, empty encoding */ MaxWordLength;
    void /* unknown type, empty encoding */ MaxTitleLocationLength;
    void /* unknown type, empty encoding */ MaxNotesLength;
    void /* unknown type, empty encoding */ MinCharInInput;
    void /* unknown type, empty encoding */ ShowFuzzyFailures;
}

- (id)init;
- (void).cxx_destruct;
- (id)calendarEventFromGenerableModelOutput:(id)a0 options:(id)a1;
- (id)calendarEventFromModelOutput:(id)a0 input:(id)a1 options:(id)a2 error:(id *)a3;
- (id)fullPromptForCalendarEventGenerationWithInput:(id)a0 inputOptions:(id)a1 error:(id *)a2;
- (id)getLocaleStringWithInputOptions:(id)a0;
- (BOOL)iseligibleForCalendarEventGenerationWithInput:(id)a0 error:(id *)a1;

@end
