@class WBReader, WXReadState;

@interface WBOfficeArtReaderState : OABReaderState {
    WXReadState *mXmlDocumentState;
}

@property (weak, nonatomic) WBReader *reader;
@property (nonatomic) int currentTextType;

- (void).cxx_destruct;
- (id)initWithClient:(Class)a0;
- (id)xmlDrawingState;

@end
