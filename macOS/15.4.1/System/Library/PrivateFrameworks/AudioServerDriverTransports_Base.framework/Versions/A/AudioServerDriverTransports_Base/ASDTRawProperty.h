@class NSString;

@interface ASDTRawProperty : ASDTCustomProperty <ASDTConcreteCustomProperty>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (BOOL)storePropertyValue:(id)a0;

@end
