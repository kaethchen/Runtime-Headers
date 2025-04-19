@class NSString, KHDBRidIndex, KHDBValueSelector;

@interface KHDBFieldDef : NSObject {
    KHDBValueSelector *_valueSelector;
}

@property (retain, nonatomic) NSString *fieldName;
@property (retain, nonatomic) KHDBRidIndex *ridIndex;
@property (nonatomic) int fieldType;
@property (nonatomic) int fieldOptions;
@property (nonatomic) unsigned long long changeMask;
@property (readonly, nonatomic) BOOL isIndexed;
@property (readonly, nonatomic) BOOL isLazyLoaded;
@property (readonly, nonatomic) BOOL hasRidIndex;
@property (readonly, nonatomic) BOOL hasNullOnlyRidIndex;
@property (readonly, nonatomic) KHDBValueSelector *valueSelector;
@property (nonatomic) SEL loadMethod;
@property (nonatomic) SEL cacheMethod;
@property (nonatomic) SEL setMethod;

- (void)dealloc;
- (void)checkIntrospectionInEntity:(id)a0;
- (id)initWithFieldName:(id)a0 type:(int)a1 options:(int)a2 changeMask:(unsigned long long)a3;
- (void)setupIntrospectionInEntity:(id)a0;

@end
