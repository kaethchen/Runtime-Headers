@class NSString, BFProsodicState;

@interface BFIsoProsodicTextSpeechElement : BFSpeechElement

@property (retain, nonatomic) NSString *text;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) BFProsodicState *prosodicState;

- (void).cxx_destruct;
- (id)initWithText:(id)a0 originalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 prosodicState:(id)a2 mode:(unsigned long long)a3;

@end
