@class NSString, NSData;

@interface ASDTCustomProperty : ASDCustomProperty

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int propertyValueSize;
@property (nonatomic) int cacheMode;
@property (nonatomic) BOOL useCache;
@property (nonatomic) BOOL propertyValueWasCached;
@property (nonatomic) BOOL plistDeepCopyOnSet;
@property (weak, nonatomic) NSData *dataNoCopy;
@property (retain, nonatomic) id propertyValue;
@property (copy, nonatomic) id /* block */ propertyChangeBlock;
@property (readonly, nonatomic) BOOL includeValueInDescription;

+ (BOOL)automaticallyNotifiesObserversOfValue;
+ (BOOL)automaticallyNotifiesObserversOfPropertyValue;
+ (id)consolidatePList:(id)a0;
+ (id)customPropertyForConfig:(id)a0;

- (void).cxx_destruct;
- (id)value;
- (id)propertyName;
- (unsigned int)dataSizeWithQualifierSize:(unsigned int)a0 andQualifierData:(const void *)a1;
- (BOOL)getPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int *)a2 andData:(void *)a3 forClient:(int)a4;
- (BOOL)setPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int)a2 andData:(const void *)a3 forClient:(int)a4;
- (void)addedToDevice:(id)a0;
- (void)cachePropertyValue:(id)a0;
- (id)cachedPropertyValue;
- (BOOL)checkAndSetPropertyValue:(id)a0;
- (int)checkPropertyValue:(id)a0;
- (void)doCachePropertyValue:(id)a0;
- (id)initWithConfig:(id)a0 propertyDataType:(unsigned int)a1 qualifierDataType:(unsigned int)a2;
- (void)releasePropertyValueCache;
- (id)retrievePropertyValue;
- (BOOL)setPropertyValueWithResult:(id)a0;
- (BOOL)storePropertyValue:(id)a0;

@end
