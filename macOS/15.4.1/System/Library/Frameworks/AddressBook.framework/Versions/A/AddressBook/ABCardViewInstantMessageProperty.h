@class ABCardViewInstantMessageServiceGenerator;

@interface ABCardViewInstantMessageProperty : ABCardViewProperty {
    ABCardViewInstantMessageServiceGenerator *_serviceGenerator;
}

- (void).cxx_destruct;
- (id)emptyValueForMultiValue:(id)a0 label:(id)a1;
- (id)initWithServiceGenerator:(id)a0;
- (BOOL)isValueEmpty:(id)a0;

@end
