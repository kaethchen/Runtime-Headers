@class NSString;

@interface SCRSoundGuideItem : SCRGuideItem

@property (copy, nonatomic) NSString *sound;

- (void).cxx_destruct;
- (void)addBrailleDescriptionToRequest:(id)a0;
- (void)addDisplayTitleToRequest:(id)a0;
- (id)initWithTitle:(id)a0 key:(id)a1 modifier:(unsigned long long)a2 guide:(id)a3 subguide:(id)a4 target:(id)a5 action:(id)a6 tag:(long long)a7 info:(id)a8;
- (id)initWithTitle:(id)a0 sound:(id)a1 guide:(id)a2 subguide:(id)a3 target:(id)a4 action:(id)a5 tag:(long long)a6 info:(id)a7;

@end
