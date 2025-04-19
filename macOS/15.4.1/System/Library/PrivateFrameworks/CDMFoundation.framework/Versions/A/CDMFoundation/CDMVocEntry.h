@class NSString, SIRINLUEXTERNALUsoGraph;

@interface CDMVocEntry : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *semantic;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *usoGraph;
@property (nonatomic) int nodeIndex;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 label:(id)a1 semantic:(id)a2;
- (id)initWithText:(id)a0 label:(id)a1 semantic:(id)a2 usoGraph:(id)a3 nodeIndex:(int)a4;

@end
