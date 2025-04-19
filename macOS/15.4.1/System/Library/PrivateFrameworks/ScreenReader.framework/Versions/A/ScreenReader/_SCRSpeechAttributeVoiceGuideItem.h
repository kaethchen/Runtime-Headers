@class NSString, AXCVoiceSelection;

@interface _SCRSpeechAttributeVoiceGuideItem : SCRGuideItem

@property (readonly, copy, nonatomic) NSString *voiceRotorID;
@property (readonly, copy, nonatomic) NSString *voiceDisplayName;
@property (retain, nonatomic) AXCVoiceSelection *voiceSelection;

- (void).cxx_destruct;
- (BOOL)matchesVoiceID:(id)a0;
- (void)addDisplayTitleToRequest:(id)a0;
- (id)initWithVoiceSelection:(id)a0 identifier:(id)a1 name:(id)a2 guide:(id)a3;

@end
