@class NSValue;

@interface SCRTextGuideItem : SCRGuideItem

@property (readonly, nonatomic) NSValue *textRange;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 key:(id)a1 modifier:(unsigned long long)a2 guide:(id)a3 subguide:(id)a4 target:(id)a5 action:(id)a6 tag:(long long)a7 info:(id)a8;
- (id)initWithTitle:(id)a0 textRange:(id)a1 key:(id)a2 modifier:(unsigned long long)a3 guide:(id)a4 subguide:(id)a5 target:(id)a6 action:(id)a7 tag:(long long)a8 info:(id)a9;

@end
