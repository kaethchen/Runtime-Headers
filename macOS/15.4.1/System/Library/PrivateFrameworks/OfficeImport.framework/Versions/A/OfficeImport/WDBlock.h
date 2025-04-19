@class WDText;

@interface WDBlock : NSObject {
    WDText *mText;
}

- (id)description;
- (id)init;
- (BOOL)isEmpty;
- (void)clearProperties;
- (id)document;
- (id)text;
- (id)initWithText:(id)a0;
- (int)blockType;
- (id)newRunIterator;
- (id)runIterator;
- (int)textType;

@end
