@class NSString, NSMutableArray, NSNumber;

@interface TextSequenceInference : NSObject <TextSequence> {
    NSMutableArray *_sequence;
    NSNumber *_target;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)target;
- (id)initWithLength:(unsigned long long)a0;
- (id)sequence;
- (void)addWordWithInputId:(unsigned long long)a0;
- (id)initWithLength:(unsigned long long)a0 BOS:(unsigned long long)a1;
- (void)resetWithBOS:(unsigned long long)a0;

@end
