@class SCREvent, NSString, SCRKeyboardKey, SCRCIndexMap, AXSSKeyboardCommand, SCRGuide;

@interface SCRGuideItem : NSObject <SCRBrailleDescribing>

@property (copy, nonatomic) NSString *_command;
@property (weak, nonatomic) SCRGuide *guide;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) SCRKeyboardKey *key;
@property (readonly, nonatomic) unsigned long long modifier;
@property (readonly, copy, nonatomic) SCRCIndexMap *info;
@property (readonly, nonatomic) SCRGuide *subguide;
@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) id action;
@property (readonly, nonatomic) long long tag;
@property (readonly, nonatomic) SCREvent *event;
@property (retain, nonatomic) NSString *alternativeCommandActivator;
@property (nonatomic) BOOL forceSpeakWrittenTitle;
@property (retain, nonatomic) AXSSKeyboardCommand *axssKeyboardCommand;
@property (readonly, copy, nonatomic) NSString *keyboardShortcutAsString;

- (id)description;
- (void).cxx_destruct;
- (void)addBrailleDescriptionToRequest:(id)a0;
- (void)addDisplayTitleToRequest:(id)a0;
- (id)initWithTitle:(id)a0 command:(id)a1 guide:(id)a2 subguide:(id)a3 target:(id)a4 action:(id)a5 tag:(long long)a6 info:(id)a7;
- (id)initWithTitle:(id)a0 key:(id)a1 modifier:(unsigned long long)a2 guide:(id)a3 subguide:(id)a4 target:(id)a5 action:(id)a6 tag:(long long)a7 info:(id)a8;
- (long long)sortAscendingByTitle:(id)a0;
- (long long)sortDescendingByTitle:(id)a0;

@end
