@class TSSStyle;

@interface TSSStyleComparison : NSObject {
    TSSStyle *_first;
    TSSStyle *_second;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(id)a0 andStyle:(id)a1;

@end
