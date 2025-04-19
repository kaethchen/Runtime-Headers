@class NSDictionary, SCRElement;

@interface SCRVerbosityRotorGuide : SCRGuide

@property (readonly, nonatomic) unsigned long long owner;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) SCRElement *element;
@property (readonly, nonatomic) NSDictionary *userInfo;

+ (id)_titleForDefaultVerbosityRotor:(unsigned long long)a0;
+ (id)_cancelStringForDefaultVerbosityRotor:(unsigned long long)a0;
+ (long long)_eventTagForVerbosityRotor:(unsigned long long)a0;
+ (id)_orderedRotorOptionsForVerbosityRotor:(unsigned long long)a0;
+ (id)_selectedOptionForVerbosityRotor:(unsigned long long)a0;
+ (id)_stringKeyForVerbosityRotor:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)close;
- (void)dispatchEvent:(id)a0;
- (void)_addDescriptionToOutputRequest:(id)a0;
- (void)_addVerbosityRotorItemsForType:(unsigned long long)a0;
- (void)_selectRotorOptionForDirection:(long long)a0;
- (void)addBrailleDescriptionToRequest:(id)a0;
- (id)initWithType:(unsigned long long)a0 menuWindow:(id)a1 cursor:(id)a2;
- (void)_addDescriptionToOutputRequest:(id)a0 withBraille:(BOOL)a1;
- (BOOL)_handleVerbosityZigzagEvent:(id)a0;
- (void)_setVerbosityOption:(id)a0;
- (id)cancelString;
- (long long)eventTag;
- (id)initWithTitle:(id)a0 element:(id)a1 owner:(unsigned long long)a2 type:(unsigned long long)a3 menuWindow:(id)a4 cursor:(id)a5 userInfo:(id)a6;
- (long long)verbosityRotorItemIndexForEvent:(id)a0 request:(id)a1 force:(BOOL)a2;

@end
