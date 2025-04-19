@class NSString, SOVoiceObject;

@interface VoiceTableRow : NSObject {
    BOOL _selected;
}

@property (getter=isGroupRow) BOOL groupRow;
@property (getter=isSelected) BOOL selected;
@property unsigned long long tableIndex;
@property (readonly, retain) NSString *title;
@property (readonly, retain) SOVoiceObject *voiceObject;

+ (id)arrangedRowsFromVoiceObjects:(id)a0 useLanguageCodeOnlyToSelectVoices:(BOOL)a1 showIndividualQualities:(BOOL)a2 showFullGroupNames:(BOOL)a3 showCurrentLocaleAtTop:(BOOL)a4;

- (void)dealloc;
- (id)description;
- (id)initWithTitle:(id)a0 voiceObject:(id)a1;
- (void)setSelectedUsingLanguageCodeOnlyToSelectVoices:(BOOL)a0;

@end
