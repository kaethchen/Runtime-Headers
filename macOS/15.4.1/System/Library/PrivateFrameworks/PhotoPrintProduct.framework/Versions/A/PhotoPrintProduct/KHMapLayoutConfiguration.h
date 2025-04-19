@class NSMutableDictionary, NSMutableSet;

@interface KHMapLayoutConfiguration : NSObject {
    NSMutableSet *_layoutElements;
}

@property (readonly) NSMutableDictionary *layoutChoices;

- (void)dealloc;
- (id)init;
- (void)commitLayoutChoices;
- (unsigned long long)layoutChoiceIdxForElement:(id)a0;
- (void)setLayoutChoiceIdx:(unsigned long long)a0 forElement:(id)a1;

@end
