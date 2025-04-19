@class WDText, WDDocument, NSNumber, WDAContent;

@interface WDATextBox : NSObject {
    WDText *mText;
    unsigned long long mNextTextBoxId;
    BOOL mOle;
}

@property (retain) NSNumber *flowSequence;
@property (retain) NSNumber *flowId;
@property BOOL isMultiColumn;
@property (weak) WDDocument *document;
@property (weak) WDAContent *parent;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)text;
- (void)setText:(id)a0;
- (void)setOle:(BOOL)a0;
- (BOOL)isOle;
- (unsigned long long)nextTextBoxId;
- (void)setNextTextBoxId:(unsigned long long)a0;

@end
