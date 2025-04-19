@class NSArray;

@interface SBCommandThunk : SBThunk {
    unsigned int _eventClass;
    unsigned int _eventID;
    unsigned int _return_ae_type;
    NSArray *_parameters;
}

+ (id)thunksForElement:(id)a0 inDocument:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)invoke:(id)a0;
- (id)initWithElement:(id)a0 inDocument:(id)a1;
- (id)initWithElement:(id)a0 inDocument:(id)a1 dpIsParameter:(BOOL)a2;

@end
