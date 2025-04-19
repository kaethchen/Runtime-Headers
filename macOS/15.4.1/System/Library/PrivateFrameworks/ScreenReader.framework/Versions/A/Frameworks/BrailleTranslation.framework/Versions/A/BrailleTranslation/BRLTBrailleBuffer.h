@class BRLTBrailleString;

@interface BRLTBrailleBuffer : NSObject <NSCopying> {
    BRLTBrailleString *_brailleString;
}

@property (readonly, nonatomic) BRLTBrailleString *brailleString;
@property (nonatomic) unsigned long long cursor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)deleteBrailleChar;
- (id)initWithBrailleString:(id)a0;
- (void)insertBrailleChar:(id)a0;
- (void)insertBrailleChar:(id)a0 modifiers:(id)a1 inputMode:(unsigned long long)a2;

@end
