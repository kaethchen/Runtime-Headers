@class NSString;

@interface _ICLexiconView : NSObject {
    struct _LXLexicon { } *_lexicon;
}

@property (readonly, nonatomic) unsigned char typeFlags;
@property (readonly, nonatomic) NSString *name;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)contains:(id)a0;
- (struct _LXLexicon { } *)getLexiconImplementation;
- (struct _LXEntry { } *)copyEntryForString:(id)a0;
- (id)getSortKeyEquivalents:(id)a0;
- (id)initWithName:(id)a0 typeFlags:(unsigned char)a1;

@end
