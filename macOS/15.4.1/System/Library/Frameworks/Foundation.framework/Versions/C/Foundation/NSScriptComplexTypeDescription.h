@class NSArray;

@interface NSScriptComplexTypeDescription : NSScriptTypeDescription {
    unsigned int _appleEventCode;
    NSArray *_alternativeTypeDescriptions;
}

- (void)dealloc;
- (id)name;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (id)alternativeTypeDescriptions;
- (void)appendObjectClassDeclarationToAETEData:(id)a0;
- (unsigned int)appleEventCode;
- (id)classDescription;
- (id)coercedValue:(id)a0;
- (id)errorExpectedTypeDescriptor;
- (id)initWithAppleEventCode:(unsigned int)a0 alernativeTypeDescriptions:(id)a1;
- (BOOL)matchesAppleEventCode:(unsigned int)a0;
- (id)objcClassName;
- (SEL)objcCreationMethodSelector;
- (SEL)objcDescriptorCreationMethodSelector;

@end
