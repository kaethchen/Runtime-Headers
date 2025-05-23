@class NSString, NSMutableArray;

@interface TextSequenceTrain : NSObject <TextSequence> {
    NSMutableArray *_sequence;
    NSMutableArray *_target;
    NSMutableArray *_mask;
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
- (id)mask;
- (void)addWordWithInputId:(unsigned long long)a0 target:(unsigned long long)a1 mask:(unsigned long long)a2;
- (void)addWordWithInputId:(unsigned long long)a0;

@end
