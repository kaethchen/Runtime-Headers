@class NSArray, OSAScriptView, NSMutableString, NSMutableArray;

@interface OSAScriptAssistantDataSource : NSObject {
    OSAScriptView *_scriptView;
    NSMutableArray *_strategies;
    NSArray *_items;
    NSMutableString *_infoString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _lastParseRange;
}

+ (id)localImage;
+ (id)smallEventImage;
+ (id)smallLocalImage;
+ (id)commandImage;
+ (id)enumImage;
+ (id)eventImage;
+ (id)globalImage;
+ (id)keywordImage;
+ (id)propertyImage;
+ (id)scriptImage;
+ (id)smallCommandImage;
+ (id)smallEnumImage;
+ (id)smallGlobalImage;
+ (id)smallKeywordImage;
+ (id)smallPropertyImage;
+ (id)smallScriptImage;
+ (id)smallTerminologyImage;
+ (id)terminologyImage;

- (void)dealloc;
- (long long)count;
- (id)items;
- (void)setItems:(id)a0;
- (id)infoString;
- (void)setInfoString:(id)a0;
- (void)updateList;
- (id)strategies;
- (BOOL)isPopupTrigger:(unsigned short)a0;
- (id)initWithScriptView:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })lastParseRange;
- (void)purgeList;
- (id)scriptView;
- (void)setLastParseRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setScriptView:(id)a0;
- (void)setStrategies:(id)a0;
- (BOOL)shouldUpdateList;

@end
