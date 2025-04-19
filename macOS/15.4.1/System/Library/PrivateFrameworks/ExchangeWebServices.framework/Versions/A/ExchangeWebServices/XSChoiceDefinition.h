@class NSArray, NSMapTable;

@interface XSChoiceDefinition : XSDefinition {
    NSMapTable *_elements;
}

@property (readonly, copy, nonatomic) NSArray *elements;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)elementForValue:(id)a0;
- (void)setName:(id)a0 namespaceURI:(id)a1 forType:(Class)a2;

@end
