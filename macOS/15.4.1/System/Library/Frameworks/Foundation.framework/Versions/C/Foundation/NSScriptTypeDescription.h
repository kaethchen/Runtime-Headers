@interface NSScriptTypeDescription : NSObject

- (id)description;
- (id)name;
- (unsigned int)appleEventCode;
- (id)classDescription;
- (id)coercedValue:(id)a0;
- (id)errorExpectedTypeDescriptor;
- (BOOL)isEnumeration;
- (BOOL)isList;
- (BOOL)matchesAppleEventCode:(unsigned int)a0;
- (id)objcClassName;
- (SEL)objcCreationMethodSelector;
- (SEL)objcDescriptorCreationMethodSelector;
- (void)reconcileToSuiteRegistry:(id)a0 suiteName:(id)a1;

@end
