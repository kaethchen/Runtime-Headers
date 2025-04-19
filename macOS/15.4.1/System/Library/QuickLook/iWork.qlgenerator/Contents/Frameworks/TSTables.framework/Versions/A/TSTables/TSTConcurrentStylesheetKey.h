@class TSSStyle, TSSPropertyMap;

@interface TSTConcurrentStylesheetKey : NSObject

@property (retain, nonatomic) TSSStyle *style;
@property (retain, nonatomic) TSSPropertyMap *propertyMap;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(id)a0 andPropertyMap:(id)a1;

@end
