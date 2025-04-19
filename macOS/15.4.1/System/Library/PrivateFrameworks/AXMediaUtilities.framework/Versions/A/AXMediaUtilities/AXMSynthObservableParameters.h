@class NSMutableDictionary, NSPointerArray, NSMutableOrderedSet, NSDictionary;

@interface AXMSynthObservableParameters : NSObject

@property (retain, nonatomic) NSPointerArray *parameterObservers;
@property (retain, nonatomic) NSMutableDictionary *parameterValues;
@property (retain, nonatomic) NSMutableOrderedSet *supportedParameters;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)defaultParameters;

- (id)init;
- (void).cxx_destruct;
- (void)removeParameterObserver:(id)a0;
- (void)addParameterObserver:(id)a0;
- (void)addSupportedParameter:(id)a0;
- (void)addSupportedParameters;
- (void)addSupportedParameters:(id)a0;
- (BOOL)assertParameterIsSupported:(id)a0;
- (id)getValueForParameter:(id)a0;
- (BOOL)isParameterSupported:(id)a0;
- (void)notifyObserversOfValueChange:(id)a0 forParameter:(id)a1;
- (void)setValue:(id)a0 forParameter:(id)a1;

@end
