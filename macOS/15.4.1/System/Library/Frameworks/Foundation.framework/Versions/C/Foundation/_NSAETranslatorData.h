@interface _NSAETranslatorData : NSObject {
    id translator;
    SEL selector;
}

- (void)dealloc;
- (id)initWithTranslator:(id)a0 selector:(SEL)a1;

@end
