@class CLSPersonIdentity, NSMutableArray;

@interface CLSOutputClue : CLSClue {
    NSMutableArray *_relatedInputLocationClues;
}

@property (retain) CLSPersonIdentity *relatedPerson;

+ (id)clueWithValue:(id)a0 forKey:(id)a1;
+ (id)clueWithValue:(id)a0 forKey:(id)a1 confidence:(double)a2 relevance:(double)a3;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addRelatedInputLocationClues:(id)a0;
- (id)relatedInputLocationClues;

@end
